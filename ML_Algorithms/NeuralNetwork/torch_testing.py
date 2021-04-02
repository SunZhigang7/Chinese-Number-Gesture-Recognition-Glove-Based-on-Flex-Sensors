import numpy as np
#import random
import torch
import torch.nn.functional as F
from sklearn.metrics import confusion_matrix, ConfusionMatrixDisplay

class Net(torch.nn.Module):
        def __init__(self):
            super(Net, self).__init__()
            self.l1 = torch.nn.Linear(5, 16)
            self.l2 = torch.nn.Linear(16, 10)
    
        def forward(self, x):
            x = F.relu(self.l1(x))
            x = F.softmax(self.l2(x))
            return x
        
if __name__ == '__main__':
    PATH = './gestureModel_3.pth'
    
    #evaluation
    x_t = np.load('data_merging/FingerData_np/x_train.npy')
    x_v = np.load('data_merging/FingerData_np/x_test.npy')
    y_t = np.load('data_merging/FingerData_np/y_train.npy')
    y_v = np.load('data_merging/FingerData_np/y_test.npy')
    x_t = torch.tensor(x_t, dtype = torch.float)
    x_v = torch.tensor(x_v, dtype = torch.float)
    y_t = torch.tensor(y_t, dtype = torch.long)
    my_model = Net()
    my_model.load_state_dict(torch.load(PATH))
    result = my_model(x_v).detach().numpy()
    correct = 0
    predict_y = []
    for i in range(result.shape[0]):
        c = np.argmax(result[i])
        predict_y.append(c)
        if c == y_v[i]:
            correct += 1
    print('The accuracy is ', correct/result.shape[0])
    # Display Confusion matrix
    predict_y = np.array(predict_y)
    my_labels = [0,1,2,3,4,5,6,7,8,9]
    cm = confusion_matrix(y_v, predict_y, labels=my_labels)
    disp = ConfusionMatrixDisplay(confusion_matrix=cm, display_labels=my_labels)
    disp.plot()
    