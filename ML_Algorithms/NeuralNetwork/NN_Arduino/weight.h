#define layerInSize_1 5
#define layerOutSize_1 16
#define layerInSize_2 16
#define layerOutSize_2 10
#include <avr/pgmspace.h>

const float layer_1[5][16] = {{0.43398434, 0.9061971, 0.21720779, 0.1606816, -0.149104, 2.426761, -3.9853308, -0.4604799, 1.680203, 0.42223847, -3.8277042, 0.06242174, -0.3370134, -0.37887058, -0.11334932, 5.307856},
{-1.005567, 2.35225, 0.12409252, -0.27526864, 0.40092093, -0.071644016, 2.7712345, -0.08780985, 2.5255444, -0.3709576, -1.6229789, 0.18628973, 0.31540555, -0.44016612, -0.2728065, 2.7362964},
{-0.13304065, -3.4967606, -0.06532946, -0.030568838, -0.12175724, 3.5390277, 3.8367774, -0.36888537, 5.269252, 0.2547968, -4.354835, 0.014401227, -0.049423963, 0.3777892, -0.33891362, -2.9510908},
{4.384561, 4.8064003, 0.08947796, -0.21199399, -0.082427144, -0.13445958, 4.6176567, 0.058942452, -3.6253, 0.21623409, 4.0381894, -0.4397698, -0.18233731, 0.20875204, 0.2579108, -4.39774},
{4.1212854, -1.7174207, -0.21227208, 0.25749218, -0.086565286, 8.979172, -7.582711, 0.016474936, -3.318668, -0.42638907, -1.6117536, -0.27828693, 0.42013758, 0.44610924, 0.120906465, -4.3009486}};
const float layer_bias_1[16] = {-2.8392596, -1.7099246, -0.32136852, -0.4060396, -0.39237365, -1.5550439, -0.8860144, 0.04029623, -0.7694022, -0.3856983, 5.6410084, -0.30840236, -0.28887856, -0.22697665, -0.15081611, 2.369698};
const float layer_2[16][10] = {{-13.9535675, -1.14078, 1.477213, -17.44021, -1.5321902, 7.8507414, -0.71525025, -0.5973198, 8.0677185, -6.7315164},
{-29.742685, 9.727361, -2.2276418, -2.0644894, 6.409159, -0.129342, -7.09739, -14.200523, 1.6857455, 6.9886107},
{-0.051038772, 0.13485518, -0.2462335, -0.20538676, 0.22656885, -0.0797565, -0.031318873, 0.11196998, 0.20654982, 0.23495033},
{0.00043573976, -0.08413714, -0.203145, 0.090328515, -0.18350804, -0.0050765574, 0.19312033, 0.07204512, 0.18715325, -0.031436354},
{0.12753564, 0.22944233, 0.050856143, -0.0806219, 0.19217506, -0.16491702, -0.036004454, 0.20032567, 0.14388728, -0.24952394},
{2.049145, -3.7924826, -2.3420122, 1.2794664, -2.961233, 2.9133902, 1.8074659, 2.000489, 2.6888092, -3.3954368},
{-3.5287185, 5.513657, 14.571499, -9.364704, 7.0672474, -6.040438, -25.551676, 0.9920525, -8.248045, -5.5829253},
{0.028987058, -0.108442806, 0.15157339, -0.18971103, -0.043455563, 0.113238975, 0.044381198, -0.17872435, -0.08898779, 0.09654738},
{3.479093, -15.728115, 0.14238946, 8.135659, 4.013682, -1.0189248, -0.23514372, -0.12171705, -20.9565, -2.5451417},
{-0.13443783, 0.1008226, -0.2057403, -0.19801673, 0.07358459, -0.22479257, -0.06373671, -0.14184928, -0.2242997, -0.021788865},
{0.49348435, 5.735585, -0.3853125, -12.027374, -6.869652, -8.339896, -2.9124162, 0.48378834, 1.9457633, 5.91},
{-0.06956926, 0.08427608, -0.043144852, 0.007488698, 0.0027011335, -0.09174207, 0.11008203, -0.012436628, -0.17053121, 0.19396275},
{0.19700316, 0.22963926, -0.22965768, -0.18647563, 0.14280775, 0.12226972, 0.0782575, -0.19507483, -0.019367933, -0.0588004},
{0.0627822, -0.105490476, 0.06989521, -0.23053753, -0.038149506, -0.13491508, 0.23963657, 0.22597745, 0.13488668, -0.11547765},
{-0.1401009, 0.1376539, -0.012804759, -0.25771934, -0.13595735, -0.0035814422, 0.10022129, 0.00035434833, -0.103309624, -0.037331723},
{-0.28343913, -0.16186084, -22.325325, 8.8397455, 2.730278, -2.4944372, 6.4664664, -11.270899, -11.223129, 6.9234624}};
const float layer_bias_2[10] = {1.9572616, 0.84070945, -1.9704024, 0.97260636, -1.9229792, -2.1574383, 0.7435378, -0.16150263, -0.02454779, 2.493136};
