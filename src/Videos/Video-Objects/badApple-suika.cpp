#include "Videos/video-objects.h"

/*
240 x 120

Start frame: 4970
Frame count: 1
Frame step: 10
FPS: 30
*/

std::vector< std::vector<uint8_t> > badApple_image = {{137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,224,0,0,0,240,8,6,0,0,0,216,117,183,186,0,0,0,1,115,
82,71,66,0,174,206,28,233,0,0,28,164,73,68,65,84,120,94,237,157,225,154,221,166,14,69,59,79,62,233,147,
79,235,105,157,16,199,54,2,36,144,196,202,159,222,239,14,6,105,111,193,58,248,216,156,143,175,175,175,
175,191,248,135,2,15,10,252,253,247,223,127,253,248,241,3,125,140,21,56,52,254,252,252,52,30,133,238,
81,0,5,60,41,240,1,128,61,217,225,43,22,224,59,215,15,32,60,87,111,70,67,129,213,10,0,224,213,14,56,29,
31,248,206,55,6,0,207,215,156,17,81,96,165,2,0,120,165,250,78,199,6,190,235,140,1,194,235,180,103,100,
20,152,173,0,0,158,173,120,128,241,0,240,58,147,0,240,58,237,25,25,5,102,43,0,128,103,43,238,124,60,224,
187,222,32,32,188,222,3,34,64,129,25,10,0,224,25,42,7,25,3,248,250,48,10,0,251,240,129,40,80,192,90,1,
0,108,173,112,160,254,1,176,15,179,0,176,15,31,136,2,5,172,21,0,192,214,10,7,234,255,227,227,35,80,180,
185,67,5,194,185,253,37,59,20,56,20,0,192,212,193,183,2,236,126,125,21,2,0,246,229,7,209,160,128,133,
2,0,216,66,213,128,125,2,96,95,166,1,96,95,126,16,13,10,88,40,0,128,45,84,13,214,39,240,245,105,24,167,
196,250,244,133,168,80,64,75,1,0,172,165,100,224,126,0,176,79,243,0,176,79,95,136,10,5,180,20,0,192,90,
74,6,238,7,0,251,52,15,0,251,244,133,168,80,64,75,1,0,172,165,100,224,126,0,176,79,243,0,176,79,95,136,
10,5,180,20,0,192,90,74,6,238,7,0,251,52,15,0,251,244,133,168,80,64,75,1,0,172,165,100,224,126,0,176,
79,243,0,176,79,95,136,10,5,180,20,0,192,90,74,6,238,7,0,251,52,15,0,251,244,133,168,80,64,75,1,0,172,
165,100,224,126,0,176,63,243,120,15,216,159,39,68,132,2,218,10,0,96,109,69,3,246,119,0,248,248,119,44,
250,252,243,161,0,0,246,225,3,81,160,128,165,2,0,216,82,221,32,125,3,96,127,70,1,96,127,158,16,17,10,
104,43,0,128,181,21,13,218,31,183,161,125,25,7,128,125,249,65,52,40,96,161,0,0,182,80,53,96,159,236,130,
253,152,6,124,253,120,65,36,40,96,169,0,0,182,84,55,80,223,0,216,143,89,0,216,143,23,68,130,2,150,10,
0,96,75,117,131,245,13,132,125,24,6,128,125,248,64,20,40,96,173,0,0,182,86,56,80,255,0,216,143,89,231,
19,233,159,159,159,126,130,34,18,20,64,1,85,5,0,176,170,156,241,59,3,194,126,60,100,39,236,199,11,34,
65,1,11,5,0,176,133,170,129,251,4,192,126,204,3,192,126,188,32,18,20,176,80,0,0,91,168,26,188,79,32,236,
195,64,110,67,251,240,129,40,80,192,74,1,0,108,165,108,240,126,129,176,47,3,203,83,202,248,94,216,151,
55,68,131,2,189,10,0,224,94,229,54,184,142,195,57,252,154,204,238,216,175,55,68,134,2,82,5,0,176,84,169,
13,219,177,11,142,97,58,48,142,225,19,81,162,192,85,1,0,76,77,188,42,0,132,227,20,8,32,142,227,21,145,
162,192,161,0,0,166,14,170,10,0,225,170,68,174,26,0,98,87,118,16,12,10,60,42,0,128,41,14,145,2,64,88,
36,147,171,70,128,216,149,29,4,131,2,127,40,0,128,41,10,177,2,64,88,44,149,171,134,188,79,236,202,14,
130,65,129,159,10,0,96,138,161,73,1,32,220,36,151,155,198,64,216,141,21,4,130,2,0,152,26,232,87,224,132,
240,209,67,249,126,106,127,143,92,57,67,1,32,60,67,101,198,64,1,185,2,236,128,229,90,209,178,80,0,8,199,
45,135,175,175,175,184,193,19,57,10,36,82,0,0,39,50,115,69,42,220,146,94,161,250,216,152,236,132,199,
244,227,106,20,208,82,0,0,107,41,185,121,63,128,56,86,1,0,225,88,126,17,109,78,5,0,112,78,95,151,100,
5,132,151,200,222,61,40,16,238,150,142,11,81,64,69,1,0,172,34,35,157,148,10,0,226,56,245,192,247,193,
113,188,34,210,124,10,0,224,124,158,186,201,136,7,181,220,88,241,24,8,187,96,255,30,17,97,94,5,0,112,
94,111,221,100,6,136,221,88,113,27,8,187,96,223,254,16,93,94,5,0,112,94,111,93,102,6,140,253,217,194,
46,216,159,39,68,180,135,2,0,120,15,159,93,102,89,194,248,8,144,67,61,214,217,196,46,120,157,246,140,
188,175,2,0,120,95,239,93,102,126,133,50,96,158,99,19,187,224,57,58,51,10,10,148,10,0,96,234,193,189,
2,119,80,46,131,102,231,60,110,33,0,30,215,144,30,80,160,85,1,0,220,170,24,237,151,42,192,14,217,78,126,
110,67,219,105,75,207,40,112,167,0,0,166,46,220,41,0,100,215,88,2,128,215,232,206,168,251,42,0,128,247,
245,94,61,243,158,3,56,142,91,159,220,66,86,183,162,171,67,0,220,37,27,23,161,64,183,2,0,184,91,58,46,
188,42,112,0,24,152,198,173,11,0,28,215,59,34,143,169,0,0,142,233,155,187,168,129,175,59,75,154,3,2,192,
205,146,113,1,10,12,41,0,128,135,228,227,226,67,1,224,155,163,14,0,112,14,31,201,34,142,2,0,56,142,87,
110,35,5,192,110,173,105,10,12,0,55,201,69,99,20,24,86,0,0,15,75,72,7,0,56,126,13,240,30,112,124,15,207,
12,222,222,155,255,252,252,204,147,104,130,76,0,112,2,19,87,166,0,124,87,170,175,55,54,0,214,211,114,
85,79,146,183,16,240,121,149,59,247,227,2,96,95,126,132,139,6,0,135,179,236,54,96,110,63,199,247,81,250,
67,39,64,216,143,215,0,216,143,23,97,34,145,124,210,14,147,12,129,126,191,58,198,173,201,60,133,32,249,
80,204,7,46,31,126,3,96,31,62,132,137,66,50,185,195,36,67,160,223,10,176,24,231,41,4,233,252,228,67,151,
15,207,1,176,15,31,220,71,33,157,216,238,19,33,192,223,20,96,33,206,81,16,61,243,19,239,215,123,15,128,
215,123,224,58,130,158,137,237,58,33,130,251,169,0,11,112,252,98,24,249,58,8,255,215,251,15,128,215,123,
224,54,2,224,235,214,26,149,192,88,128,85,100,92,210,137,198,220,196,255,37,214,253,54,40,0,94,239,129,
187,8,36,159,170,203,51,159,57,255,217,157,133,213,128,88,124,171,18,185,108,32,153,155,146,192,241,95,
162,146,125,27,0,108,175,113,168,17,36,159,172,203,201,43,105,31,74,128,13,130,101,241,141,103,242,200,
60,187,251,197,49,106,192,71,13,0,96,31,62,184,136,66,50,201,175,19,87,114,205,202,228,206,221,57,187,
244,255,92,96,225,93,89,141,239,99,95,231,146,198,93,38,224,235,215,239,35,50,0,236,219,159,169,209,213,
96,250,180,120,215,174,155,154,196,101,176,243,21,27,207,49,206,210,7,248,206,82,186,109,156,153,181,
73,13,180,121,99,221,26,0,91,43,28,168,255,183,239,151,106,59,200,218,223,87,200,16,109,183,110,169,17,
11,175,165,186,99,125,207,2,48,53,48,230,147,197,213,0,216,66,213,192,125,190,29,228,126,133,172,231,
219,187,17,119,235,86,101,195,194,107,165,172,78,191,51,0,76,13,232,120,165,221,11,0,214,86,52,65,127,
39,132,203,227,9,165,231,204,174,78,255,252,80,240,118,180,226,140,5,111,181,14,231,248,44,188,94,156,
184,143,195,186,22,241,223,183,255,0,216,183,63,238,162,211,122,13,194,34,177,150,197,198,115,30,154,
218,180,104,162,57,46,125,189,43,0,120,169,144,67,1,0,76,29,52,43,224,13,94,146,93,239,93,146,222,242,
104,54,66,112,1,0,22,136,52,177,137,21,120,203,175,135,248,97,141,137,134,14,14,5,128,7,5,220,245,114,
15,240,210,90,116,60,228,98,89,71,64,216,82,93,89,223,22,224,197,215,63,181,127,123,134,69,226,212,236,
15,47,0,88,226,10,109,110,21,88,5,46,45,240,94,147,90,149,207,140,242,98,177,182,81,249,13,172,214,15,
41,238,248,43,86,163,128,125,171,130,217,240,229,22,180,205,156,220,170,215,21,208,178,134,201,138,156,
102,20,141,181,110,214,57,92,23,95,201,65,21,86,139,234,234,26,137,238,165,180,86,90,222,202,144,246,
89,182,235,253,250,170,103,172,187,107,216,1,107,41,185,113,63,43,22,163,25,11,208,138,188,172,203,40,
210,174,73,235,201,123,237,59,38,22,183,147,91,125,159,81,255,173,49,141,182,183,134,237,93,124,171,117,
4,192,163,85,195,245,223,10,172,88,148,102,78,30,45,24,180,150,139,100,151,215,218,167,53,132,223,118,
170,173,177,90,181,239,133,242,93,157,91,223,106,246,8,14,45,95,86,213,74,175,255,90,121,159,253,0,96,
109,69,55,238,47,59,132,79,107,45,22,141,114,65,56,198,185,187,117,170,181,35,159,241,193,101,213,7,150,
222,233,39,93,144,63,62,62,122,135,80,189,110,134,135,154,1,63,237,110,175,117,175,57,230,211,7,151,167,
249,101,61,54,183,160,87,40,188,209,152,90,128,104,149,204,195,98,212,251,112,72,207,119,148,35,31,116,
172,180,138,6,220,90,141,221,233,52,162,123,109,188,167,191,63,237,174,173,239,98,72,227,109,173,251,
217,192,61,242,88,253,61,239,155,150,236,128,165,149,70,59,145,2,43,22,169,115,146,245,192,76,148,148,
195,70,61,31,118,102,192,247,109,215,225,80,198,106,72,87,96,204,4,200,19,124,173,124,172,138,241,255,
87,77,101,187,153,122,72,226,59,219,172,212,168,37,78,0,220,162,22,109,171,10,244,128,161,218,169,176,
65,148,73,39,76,71,212,76,242,129,103,230,14,32,219,78,88,100,130,65,163,179,150,175,183,188,87,212,120,
36,79,103,214,186,134,237,0,88,67,69,250,248,77,1,9,20,172,36,139,54,1,53,116,120,210,123,150,22,43,63,
116,105,232,231,173,143,19,178,79,15,124,205,184,211,19,209,211,89,245,174,89,47,0,88,83,77,250,250,86,
96,37,128,203,91,80,199,255,158,177,88,121,176,253,250,93,220,172,188,35,237,142,60,248,84,139,225,237,
137,234,25,187,223,136,224,189,222,18,159,85,251,53,47,37,127,7,192,18,149,104,211,172,192,234,167,69,
35,126,26,110,22,217,201,5,30,62,112,57,145,194,44,12,75,248,70,135,110,249,161,59,18,124,143,184,1,176,
217,148,217,187,227,85,0,6,188,115,235,110,149,207,115,179,92,55,154,101,61,71,251,224,244,244,192,87,
52,232,150,213,4,128,215,205,173,180,35,175,156,216,94,94,207,72,107,110,145,24,240,181,115,217,10,188,
17,119,187,87,240,70,6,238,181,98,0,176,221,28,218,182,231,149,0,182,188,85,183,173,161,151,196,87,250,
187,131,7,26,53,124,247,126,174,215,87,134,36,158,102,220,253,114,11,90,226,60,109,154,20,240,176,56,
179,11,110,178,172,169,177,7,127,155,2,14,216,88,3,148,26,125,120,149,238,46,183,168,187,98,118,192,94,
171,44,104,92,30,22,104,141,29,68,80,249,77,195,246,224,173,105,130,206,58,47,159,136,190,131,78,102,
200,182,88,81,234,16,13,196,0,184,197,105,218,86,21,240,176,72,3,224,170,77,205,13,60,248,218,28,52,23,
108,163,64,212,239,137,1,240,54,37,58,39,209,115,161,190,78,136,217,159,214,129,176,174,223,0,88,87,79,
122,179,81,32,218,110,24,0,219,212,193,182,189,62,29,206,62,27,192,135,1,64,88,167,12,129,175,142,142,
244,50,71,1,171,39,200,45,162,7,192,22,170,210,231,111,10,172,90,192,1,176,78,33,30,254,29,223,173,173,
242,81,39,11,122,217,73,129,40,115,31,0,239,84,149,11,114,93,189,104,71,153,136,11,172,105,30,242,233,
189,223,67,227,21,119,56,154,19,224,2,115,5,174,187,207,222,163,74,107,79,58,63,221,105,43,19,140,240,
64,22,0,54,47,201,189,7,0,192,57,252,127,58,192,1,248,230,240,119,52,11,233,7,221,26,56,35,64,115,84,
171,242,122,0,172,169,38,125,253,161,192,106,0,243,93,176,94,81,222,121,9,128,245,244,141,214,83,164,
239,90,189,106,11,128,189,58,147,36,174,235,162,189,98,193,150,126,58,79,34,185,89,26,229,19,238,165,
143,220,126,54,147,220,93,199,64,87,215,18,0,172,171,39,189,93,20,184,3,240,185,43,157,41,22,16,30,87,
219,211,19,238,227,217,208,67,139,2,204,159,22,181,228,109,1,176,92,43,90,54,42,240,116,203,114,5,128,
185,21,221,104,222,77,243,242,105,232,243,207,236,126,199,117,245,218,3,187,93,123,103,0,176,189,198,
219,142,224,225,251,223,82,124,62,197,255,82,163,244,166,245,240,130,167,7,178,182,45,244,68,137,3,221,
185,102,2,224,185,122,111,53,154,55,0,179,11,254,85,126,111,63,37,248,182,171,101,199,155,111,10,3,221,
117,158,2,224,117,218,167,31,25,0,251,181,152,223,242,245,235,205,140,200,128,238,12,149,235,99,0,224,
186,70,180,232,80,192,35,124,203,239,45,119,123,223,240,106,161,103,127,58,202,141,75,4,10,0,93,129,72,
147,155,0,224,201,130,239,50,156,231,5,158,239,130,255,171,66,118,193,185,103,99,235,119,251,185,213,
240,153,29,0,246,233,75,248,168,158,94,63,42,19,91,249,125,34,16,6,192,225,39,89,37,129,183,249,181,251,
29,32,47,222,3,96,47,78,36,139,227,186,187,186,2,111,245,14,121,119,0,175,214,63,89,185,135,76,167,118,
222,114,200,164,130,5,13,128,131,25,22,33,220,187,197,253,235,235,235,183,208,61,0,96,71,8,123,208,61,
66,13,239,26,35,183,173,231,58,15,128,231,234,189,197,104,119,183,159,175,183,188,60,128,96,39,0,123,
208,123,139,226,79,148,36,15,109,217,155,9,128,237,53,222,110,132,30,0,175,56,35,250,48,102,23,8,3,224,
237,166,161,90,194,128,88,77,202,63,58,2,192,118,218,110,219,115,13,192,158,126,85,7,0,111,91,166,36,
222,160,0,16,110,16,171,161,41,0,110,16,139,166,50,5,122,206,128,62,39,248,138,39,163,119,128,48,59,96,
89,237,210,234,89,1,32,172,95,29,0,88,95,211,237,123,108,93,236,79,0,182,94,167,37,116,102,0,115,110,
179,86,149,208,207,169,0,32,214,171,5,0,172,167,37,61,253,123,184,67,15,68,75,0,246,92,63,42,124,102,
0,115,216,198,104,117,112,253,157,2,60,45,173,83,23,0,88,71,71,122,249,95,129,86,128,122,121,63,56,43,
132,91,253,160,144,81,64,170,0,16,150,42,245,220,14,0,143,107,72,15,133,2,173,11,254,29,248,90,251,208,
48,32,35,128,87,232,168,225,5,125,196,81,0,8,143,121,5,128,199,244,227,234,139,2,111,15,96,29,77,175,
15,89,1,96,187,18,2,192,118,218,210,243,47,5,128,112,127,53,0,224,126,237,184,242,70,129,183,87,144,238,
30,8,186,158,144,117,118,185,2,30,89,30,46,89,161,29,147,97,111,5,128,112,159,255,0,184,79,55,174,18,
194,247,104,118,158,130,37,57,162,114,37,128,203,148,34,47,40,0,152,233,185,66,129,44,31,96,103,106,7,
128,103,170,157,124,172,214,3,56,106,223,187,122,2,73,20,32,123,210,44,121,185,147,222,69,129,40,115,
196,147,113,0,216,147,27,193,99,209,6,240,33,135,87,160,120,92,108,188,106,21,188,172,9,191,65,1,118,
193,13,98,29,191,201,253,245,244,37,92,91,63,180,70,129,63,96,89,123,197,168,182,3,246,114,59,90,98,173,
151,133,135,247,126,37,110,209,198,74,1,47,243,192,42,63,237,126,1,176,182,162,155,246,247,180,251,42,
119,138,146,39,160,239,228,139,116,154,211,234,157,49,187,224,77,39,160,147,180,1,112,155,17,0,184,77,
47,90,63,40,208,186,240,75,119,191,229,112,173,99,120,48,107,213,130,20,81,43,15,126,17,195,152,2,61,
243,122,108,196,216,87,3,224,216,254,185,137,190,117,193,239,157,168,173,227,184,17,232,223,64,102,195,
56,210,157,3,79,62,17,75,191,2,189,243,186,127,196,216,87,2,224,216,254,185,137,190,245,187,199,145,137,
26,25,194,167,97,51,97,156,65,47,55,133,78,32,143,10,140,204,233,93,101,5,192,187,58,175,152,119,235,
2,175,49,81,179,236,238,102,129,184,213,35,197,242,160,171,77,20,208,152,215,155,72,245,51,77,0,188,155,
227,6,249,106,28,63,217,27,86,38,176,204,128,113,38,189,122,107,134,235,244,21,0,190,125,154,2,224,62,
221,184,234,127,5,158,224,123,158,126,117,52,171,189,31,60,42,102,70,168,88,194,56,163,94,163,53,196,
245,253,10,88,214,106,127,84,49,174,4,192,49,124,114,27,165,4,174,146,54,163,9,102,185,37,125,213,193,
114,113,3,196,163,85,199,245,135,2,236,126,251,235,0,0,247,107,183,253,149,146,221,239,33,210,245,1,45,
203,9,155,21,196,231,66,119,252,183,188,187,48,90,132,64,120,84,193,189,175,183,156,203,59,40,11,128,
119,112,217,40,199,187,157,237,21,16,51,118,191,119,233,101,6,139,197,174,56,179,94,70,229,191,125,183,
192,119,188,4,0,240,184,134,219,246,112,183,104,95,79,54,93,5,224,211,148,236,96,209,92,4,179,107,181,
237,68,53,74,92,179,246,140,66,116,223,45,0,118,111,145,223,0,107,183,160,107,127,159,153,89,230,91,211,
90,183,167,1,240,204,138,140,61,22,240,213,241,15,0,235,232,184,93,47,61,139,181,135,73,11,136,159,75,
181,199,211,237,10,159,132,121,232,74,177,6,0,176,162,152,59,117,213,179,88,123,0,112,121,107,186,220,
57,102,244,174,229,187,226,30,63,51,106,70,78,239,10,120,154,195,25,188,2,192,25,92,92,144,67,235,130,
237,117,226,102,223,17,75,110,79,183,122,185,160,220,24,210,129,2,94,231,176,3,105,186,67,0,192,221,210,
237,125,97,235,162,29,97,242,102,135,241,211,142,184,213,203,189,43,127,207,236,35,204,223,136,206,0,
224,136,174,57,136,249,233,1,171,167,219,186,215,167,163,29,164,240,24,194,78,32,6,190,158,43,209,71,
108,192,215,206,7,0,108,167,109,234,158,159,14,215,120,130,87,36,0,151,198,101,135,113,234,34,37,185,
97,5,128,239,176,132,175,29,0,96,91,125,83,246,94,123,255,119,245,187,191,86,162,179,91,180,82,150,126,
61,42,0,124,237,93,1,192,246,26,167,27,161,6,216,218,223,163,11,194,174,56,186,131,196,95,83,0,248,214,
20,210,249,59,0,214,209,113,155,94,106,135,107,212,118,199,217,132,2,198,217,28,37,31,224,59,175,6,0,
240,60,173,83,140,84,219,221,214,254,158,66,132,155,36,0,113,86,103,247,202,11,248,206,245,27,0,207,213,
59,252,104,111,128,189,131,208,142,19,26,24,135,47,243,237,18,216,113,158,122,48,25,0,123,112,33,72,12,
111,15,33,157,239,152,158,255,61,83,218,121,98,159,32,62,180,184,234,18,196,114,194,76,174,64,203,105,
105,201,165,88,146,30,0,94,34,123,204,65,91,159,2,222,25,190,119,14,183,234,23,179,74,136,58,146,2,204,
209,181,110,1,224,181,250,135,25,189,7,30,76,238,123,123,185,69,29,166,236,211,6,202,220,244,97,45,0,
246,225,131,251,40,122,0,28,245,240,141,153,102,244,232,58,51,62,198,202,167,0,240,245,227,41,0,246,227,
133,219,72,122,32,193,36,111,183,179,71,231,246,81,184,98,87,5,248,190,215,159,243,0,216,159,39,238,34,
186,123,242,249,26,36,15,95,233,217,198,45,106,61,45,189,247,116,204,155,25,15,232,241,129,216,103,37,
0,96,159,190,184,137,170,118,240,198,17,168,164,141,155,132,130,5,2,140,131,25,214,24,238,211,219,3,141,
221,60,54,7,188,90,74,218,244,3,128,109,116,77,211,171,228,96,13,73,155,52,130,44,74,4,16,47,18,222,112,
216,19,142,86,95,61,0,95,67,243,148,186,6,192,74,66,102,236,70,122,176,6,0,158,235,62,239,23,207,213,
219,98,180,18,142,231,252,209,188,29,13,124,45,92,211,239,19,0,235,107,154,166,71,201,185,206,146,54,
105,4,113,152,8,59,99,135,166,8,66,186,2,248,184,228,243,243,243,246,235,28,65,119,63,155,0,222,22,181,
214,183,5,192,235,61,112,27,129,100,103,43,105,227,54,193,36,129,93,127,155,57,73,90,105,211,184,66,242,
152,67,7,124,143,127,61,183,163,121,186,57,110,169,0,224,184,222,153,71,126,183,176,223,61,237,92,6,194,
39,112,59,91,202,91,207,199,40,51,158,158,181,203,102,223,158,223,230,72,11,128,1,111,252,26,2,192,241,
61,52,201,160,101,33,56,3,0,190,38,86,116,239,140,236,162,161,231,94,5,36,115,164,54,247,0,111,175,250,
254,174,3,192,254,60,113,17,81,109,17,184,11,82,178,184,184,72,46,88,16,61,94,4,75,113,155,112,37,115,
228,201,111,192,155,175,76,0,112,62,79,85,50,106,93,244,37,11,139,74,96,155,117,210,234,195,102,242,132,
74,87,58,71,202,7,235,128,110,40,139,155,131,5,192,205,146,237,113,65,235,194,47,93,92,246,80,79,39,203,
86,15,116,70,165,23,43,5,152,35,86,202,198,237,23,0,199,245,206,44,242,167,147,173,206,1,57,118,210,76,
250,239,142,1,175,173,190,171,122,7,192,171,148,247,59,46,0,246,235,205,178,200,222,94,45,146,30,206,
177,44,248,192,3,3,222,192,230,85,66,7,190,121,189,29,201,12,0,143,168,151,244,218,235,235,71,119,167,
246,148,169,243,179,131,99,133,192,97,26,99,250,69,184,26,0,71,112,105,126,140,0,120,190,230,174,71,172,
29,172,81,251,187,235,228,28,6,199,174,215,161,41,202,33,1,95,101,65,19,117,7,128,19,153,169,145,74,13,
176,181,191,107,196,176,75,31,192,119,15,167,1,240,30,62,247,100,9,128,123,84,75,122,77,237,92,231,59,
248,30,82,156,199,232,37,149,197,44,45,142,144,52,147,214,77,199,192,215,141,21,46,3,1,192,46,109,89,
19,212,211,211,207,79,231,212,178,184,244,251,196,238,183,95,187,72,87,50,71,34,185,53,63,86,0,60,95,
115,183,35,182,236,200,88,88,198,108,4,192,99,250,69,185,154,121,18,197,169,53,113,2,224,53,186,187,27,
181,21,8,44,44,99,22,182,124,216,25,27,137,171,87,42,192,60,89,169,190,255,177,1,176,127,143,204,35,108,
133,239,17,16,11,203,152,45,0,120,76,191,40,87,51,79,162,56,181,38,78,0,188,70,119,87,163,2,224,185,118,
244,232,61,55,66,70,211,82,128,119,228,181,148,204,217,15,0,206,233,171,56,171,183,99,39,159,126,111,
150,79,245,98,121,255,104,200,161,27,253,218,69,187,146,121,18,205,177,249,241,2,224,249,154,187,26,241,
233,213,162,107,144,37,140,89,88,250,44,100,231,219,167,91,212,171,152,39,81,157,155,23,55,0,158,167,
181,203,145,222,142,157,60,3,230,240,141,113,235,128,239,184,134,209,122,0,192,209,28,155,31,47,0,158,
175,185,155,17,165,96,149,182,115,147,152,179,64,128,175,51,67,38,133,3,128,39,9,29,120,24,0,28,216,188,
209,208,37,96,149,180,25,141,35,243,245,192,55,179,187,239,185,1,224,125,189,151,102,14,128,165,74,37,
108,119,133,195,221,19,155,0,184,223,120,224,219,175,93,134,43,121,2,58,131,139,182,57,0,96,91,125,221,
246,94,59,247,249,12,92,242,29,177,219,36,23,6,6,124,23,138,239,96,104,118,191,14,76,8,16,2,0,14,96,146,
69,136,111,175,31,149,227,241,244,115,187,250,192,183,93,179,108,87,0,224,108,142,218,228,3,128,109,116,
117,223,107,15,36,88,84,234,182,246,232,90,239,149,22,209,20,96,174,68,115,108,77,188,0,120,141,238,203,
71,109,5,5,11,74,221,178,86,77,235,61,210,34,170,2,204,151,168,206,205,141,27,0,207,213,219,205,104,173,
176,96,65,169,91,215,170,105,189,71,90,68,85,128,249,18,213,185,185,113,3,224,185,122,187,24,173,21,20,
44,38,117,219,90,53,173,247,72,139,200,10,48,103,34,187,55,47,118,0,60,79,107,55,35,181,158,255,204,98,
82,183,142,95,55,170,107,180,83,11,230,204,78,110,247,231,10,128,251,181,11,121,165,228,233,231,235,143,
48,176,152,188,91,205,238,55,228,84,48,13,154,57,99,42,111,154,206,1,112,26,43,101,137,60,1,248,243,243,
243,187,3,14,222,144,233,88,182,98,247,219,174,89,246,43,0,112,118,135,117,242,3,192,58,58,134,233,165,
118,176,6,0,110,179,146,221,111,155,94,187,180,6,192,187,56,61,150,39,0,30,211,47,212,213,181,221,239,
145,76,9,232,243,86,244,185,59,14,149,236,164,96,1,240,36,161,131,13,3,128,131,25,182,40,92,0,188,72,
248,21,195,214,142,159,100,247,219,230,10,240,109,211,107,183,214,156,5,189,155,227,237,249,2,224,118,
205,194,94,81,3,108,237,239,97,19,55,10,28,0,27,9,155,164,91,118,193,73,140,52,76,3,0,27,138,235,173,
235,187,135,133,174,103,61,151,49,179,128,188,59,8,128,189,85,184,175,120,152,63,190,252,240,24,13,0,
246,232,138,65,76,173,176,96,241,168,155,192,211,207,117,141,118,110,193,28,218,217,125,89,238,0,88,166,
83,248,86,0,88,215,194,86,61,117,71,167,183,40,10,0,225,40,78,173,137,19,0,175,209,125,234,168,61,176,
96,225,224,246,243,212,34,77,58,24,243,40,169,177,74,105,1,96,37,33,61,119,3,128,245,221,233,209,84,63,
10,122,244,174,0,0,246,238,208,218,248,0,240,90,253,167,140,126,247,116,243,117,96,142,159,108,179,2,
0,183,233,181,115,107,94,71,218,217,253,247,220,1,112,242,218,144,28,190,33,105,147,92,166,230,244,0,
112,179,100,219,94,0,128,183,181,190,154,56,0,174,74,20,187,129,4,174,71,155,227,223,245,149,36,78,192,
122,246,158,39,160,99,207,139,153,209,3,224,153,106,199,26,11,0,199,242,171,57,90,41,128,185,5,221,38,
45,0,110,211,107,231,214,124,15,188,179,251,220,130,222,218,125,201,233,86,79,223,17,179,3,102,7,188,
245,228,81,74,30,0,43,9,153,176,27,118,192,9,77,45,83,2,192,54,6,179,3,182,209,53,107,175,220,134,206,
234,236,88,94,0,120,76,63,247,87,215,126,126,240,72,128,29,112,187,141,0,184,93,179,157,175,0,192,59,
187,255,114,39,237,139,202,72,93,25,119,0,190,38,124,247,253,239,209,134,91,208,220,130,78,61,57,38,38,
199,109,232,137,98,7,26,138,29,112,32,179,122,66,237,217,169,177,88,212,149,238,209,181,222,43,45,178,
42,192,156,202,234,236,88,94,0,120,76,63,247,87,183,130,226,220,13,179,251,125,183,182,85,87,247,133,
66,128,166,10,0,96,83,121,195,118,14,128,195,90,39,11,188,21,20,0,216,70,87,89,175,180,202,170,0,0,206,
234,236,88,94,0,120,76,63,247,87,3,96,27,139,90,117,181,137,130,94,35,41,192,227,54,145,220,154,19,43,
0,158,163,243,146,81,122,142,75,228,147,186,204,42,0,44,211,137,86,191,20,0,192,84,195,85,1,0,156,184,
38,158,78,193,42,83,230,4,172,190,2,0,192,125,186,237,124,21,31,110,119,118,255,62,119,0,156,184,38,158,
94,65,58,31,176,146,28,83,153,88,158,161,212,0,240,144,124,91,94,12,128,183,180,253,53,105,0,156,184,
38,0,176,157,185,61,183,247,237,162,161,231,8,10,0,224,8,46,205,141,17,0,207,213,123,218,104,111,183,
159,159,118,192,60,1,45,183,7,0,203,181,186,182,60,235,236,250,245,71,127,143,49,174,4,192,49,124,154,
25,37,0,158,169,246,196,177,106,0,126,250,9,194,35,68,222,1,174,27,5,128,235,26,61,181,56,30,70,218,85,
63,30,196,234,175,155,140,87,2,224,140,174,222,156,239,124,164,89,238,112,107,128,78,42,139,90,90,187,
2,100,84,192,114,23,184,163,134,236,130,71,43,40,215,245,0,56,151,159,63,179,233,125,2,154,29,176,172,
32,118,132,135,76,153,231,86,87,248,236,168,33,0,30,173,162,92,215,3,224,92,126,190,2,184,150,42,223,
1,215,20,250,245,247,29,225,33,87,231,190,229,29,124,118,211,17,0,143,86,81,174,235,1,112,46,63,1,240,
36,63,119,3,199,168,172,111,31,238,118,210,18,0,143,86,82,174,235,1,112,46,63,1,240,68,63,121,23,88,46,
246,27,120,0,176,92,71,90,230,82,0,0,231,242,19,0,79,244,19,0,203,197,174,237,252,118,130,48,79,66,203,
235,38,123,75,0,156,212,225,222,5,141,239,129,229,5,209,171,177,124,132,60,45,37,208,217,69,79,137,22,
121,156,39,147,55,5,0,112,210,250,144,60,5,125,164,126,119,22,244,241,255,243,46,112,189,48,118,1,70,
93,137,122,11,9,116,118,209,83,162,69,93,81,90,100,80,0,0,103,112,241,38,135,26,128,79,192,214,142,171,
76,42,143,74,90,187,0,67,67,44,41,116,118,208,84,170,133,134,238,244,225,91,1,0,236,219,159,238,232,164,
7,109,92,219,113,11,90,46,249,14,176,144,171,241,222,178,5,58,217,191,91,111,209,66,75,127,250,241,169,
0,0,246,233,203,112,84,0,120,88,194,106,7,0,184,42,209,119,131,218,3,88,215,94,178,235,10,128,101,117,
179,67,43,0,156,212,229,94,0,247,44,152,73,37,172,166,149,29,20,85,1,132,13,90,1,124,116,155,89,91,0,
44,44,156,13,154,1,224,196,38,223,221,202,147,28,7,200,109,104,89,81,100,134,132,76,1,121,171,86,232,
28,218,158,31,6,229,163,196,104,217,170,69,140,172,136,178,71,1,0,220,163,90,144,107,36,187,96,73,155,
32,233,46,9,51,251,247,149,90,162,246,64,39,235,7,156,30,45,180,124,160,31,95,10,0,96,95,126,168,70,211,
187,128,177,3,150,219,0,128,101,90,245,220,134,206,122,43,26,0,203,106,102,135,86,0,56,177,203,0,216,
222,92,0,44,211,184,23,192,209,32,124,228,121,125,183,254,170,16,0,150,213,204,14,173,0,112,114,151,123,
0,193,14,88,94,20,189,31,114,228,35,228,104,57,2,224,67,129,158,58,94,161,220,57,119,222,32,12,128,87,
56,227,115,76,0,236,211,23,181,168,122,22,46,0,44,151,31,0,203,180,26,5,112,20,157,1,176,172,30,104,245,
159,2,0,56,121,37,244,44,92,229,167,119,142,164,124,47,144,30,125,147,151,220,109,122,163,0,142,112,43,
186,204,241,173,46,216,1,239,56,3,238,115,6,192,201,107,225,105,33,40,33,123,119,187,140,93,176,172,48,
0,176,76,167,163,149,6,120,60,235,13,128,229,181,64,75,118,192,219,212,192,211,251,192,165,0,252,40,67,
95,57,120,6,66,95,70,118,87,105,236,130,61,239,132,1,176,93,237,100,237,153,29,112,86,103,139,188,106,
239,250,74,127,184,97,3,169,186,82,236,249,158,189,107,160,224,23,105,1,248,251,187,179,143,15,119,106,
0,96,119,150,184,15,8,0,187,183,104,60,64,0,60,174,225,91,15,30,97,96,155,113,95,239,154,0,246,120,231,
65,114,202,156,214,173,248,62,7,184,202,155,2,0,216,155,35,6,241,212,118,184,199,144,79,183,160,143,191,
241,32,214,187,41,30,97,96,80,70,195,93,106,2,216,235,173,232,242,123,238,167,121,199,124,26,46,165,52,
29,0,224,52,86,62,39,2,128,109,77,6,192,114,125,53,30,196,42,71,243,166,253,53,191,107,124,218,249,203,
149,167,165,71,5,0,176,71,87,148,99,170,61,9,253,246,20,52,59,224,186,25,222,32,80,143,120,93,11,11,0,
121,210,31,0,175,171,173,136,35,255,3,101,25,209,48,14,69,210,243,0,0,0,0,73,69,78,68,174,66,96,130,
},
};

VideoInfo badApple_suika_image(30, 10, &badApple_image);
