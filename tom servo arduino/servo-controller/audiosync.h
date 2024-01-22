#ifndef AUDIOSYNC_h
#define AUDIOSYNC_hs
#include <Arduino.h>

const PROGMEM int clips = 21;
const PROGMEM int rows = 71;
const PROGMEM int columns = 2;

const PROGMEM int animations[clips][ rows ][ columns ] = {
  {
    {20, 0},
    {60, 1},
    {120, 0},
    {160, 1},
    {200, 0},
    {400, 1},
    {460, 0},
    {500, 1},
    {560, 0},
    {600, 1},
    {920, 0},
    {960, 1},
    {1280, 0},
    {2260, 1},
    {2380, 0},
    {2460, 1},
    {2560, 0},
    {2640, 1},
    {2700, 0},
    {2740, 1},
    {2820, 0},
    {2860, 1},
    {2960, 0},
    {3020, 1},
    {3160, 0},
    {3220, 1},
    {3440, 0}
  },{
    {20, 0},
    {160, 1},
    {300, 0},
    {400, 1},
    {560, 0},
    {680, 1},
    {820, 0},
    {880, 1},
    {980, 0},
    {1060, 1},
    {1240, 0},
    {1300, 1},
    {1380, 0},
    {1460, 1},
    {1640, 0},
    {1760, 1},
    {1860, 0},
    {1920, 1},
    {2000, 0},
    {2040, 1},
    {2140, 0},
    {2220, 1},
    {2380, 0},
    {2460, 1},
    {2680, 0},
    {2800, 1},
    {3080, 0},
    {3160, 1},
    {3200, 0},
    {3240, 1},
    {3320, 0},
    {3360, 1},
    {3460, 0},
    {3540, 1},
    {3660, 0},
    {3720, 1},
    {3920, 0},
    {3980, 1},
    {4180, 0},
    {4260, 1},
    {4360, 0},
    {4660, 1},
    {4820, 0},
    {4880, 1},
    {4960, 0},
    {5020, 1},
    {5140, 0},
    {5200, 1},
    {5300, 0},
    {5360, 1},
    {5420, 0},
    {5500, 1},
    {5560, 0},
    {5620, 1},
    {5700, 0},
    {5740, 1},
    {5800, 0},
    {5840, 1},
    {5880, 0},
    {5920, 1},
    {6040, 0},
    {6160, 1},
    {6280, 0},
    {6440, 1},
    {6560, 0},
    {6620, 1},
    {6720, 0},
    {6780, 1},
    {6840, 0},
    {6920, 1},
    {7060, 0}
  }, {
    {20, 0},
    {100, 1},
    {260, 0},
    {320, 1},
    {460, 0},
    {580, 1},
    {840, 0},
    {1300, 1},
    {1400, 0},
    {1460, 1},
    {1600, 0},
    {1660, 1},
    {1860, 0},
    {1960, 1},
    {2080, 0},
    {2240, 1},
    {2480, 0},
    {2540, 1},
    {2620, 0},
    {2760, 1},
    {3240, 0}
  }, {
    {20, 0},
    {120, 1},
    {300, 0},
    {700, 1},
    {1060, 0},
    {1280, 1},
    {1740, 0},
    {1860, 1},
    {2120, 0},
    {2200, 1},
    {2360, 0},
    {2400, 1},
    {2520, 0},
    {2580, 1},
    {2640, 0},
    {2680, 1},
    {2720, 0},
    {2780, 1},
    {2840, 0},
    {2980, 1},
    {3180, 0},
    {3340, 1},
    {3660, 0},
    {3740, 1},
    {4260, 0},
    {4460, 1},
    {4540, 0},
    {4740, 1},
    {4860, 0},
    {5220, 1},
    {5280, 0},
    {5320, 1},
    {5380, 0},
    {5560, 1},
    {5640, 0},
    {5820, 1},
    {6000, 0}
  }, {
    {20, 0},
    {100, 1},
    {240, 0},
    {300, 1},
    {360, 0},
    {420, 1},
    {540, 0},
    {600, 1},
    {680, 0},
    {780, 1},
    {900, 0},
    {960, 1},
    {1020, 0},
    {1080, 1},
    {1220, 0},
    {1340, 1},
    {1420, 0},
    {1480, 1},
    {1540, 0},
    {1600, 1},
    {1740, 0},
    {1800, 1},
    {1900, 0},
    {1980, 1},
    {2100, 0},
    {2160, 1},
    {2260, 0},
    {2420, 1},
    {2660, 0},
    {2800, 1},
    {3140, 0},
    {3240, 1},
    {3300, 0},
    {3340, 1},
    {3460, 0},
    {3560, 1},
    {3660, 0},
    {3800, 1},
    {3860, 0},
    {3920, 1},
    {4100, 0},
    {4240, 1},
    {4340, 0},
    {4400, 1},
    {4540, 0},
    {4600, 1},
    {4720, 0},
    {4780, 1},
    {4860, 0},
    {4980, 1},
    {5080, 0},
    {5160, 1},
    {5320, 0},
    {5820, 1},
    {5960, 0}
  }, {
    {20, 0},
    {600, 1},
    {760, 0},
    {900, 1},
    {1060, 0},
    {1120, 1},
    {1200, 0},
    {1280, 1},
    {1620, 0},
    {1740, 1},
    {1880, 0},
    {2000, 1},
    {2120, 0},
    {2180, 1},
    {2360, 0},
    {2520, 1},
    {2640, 0},
    {2700, 1},
    {2800, 0},
    {2920, 1},
    {3120, 0}
  }, {
    {20, 0},
    {3240, 1},
    {3300, 0},
    {3360, 1},
    {3460, 0},
    {3500, 1},
    {3560, 0},
    {3620, 1},
    {3700, 0},
    {3760, 1},
    {3860, 0},
    {3900, 1},
    {3980, 0},
    {4040, 1},
    {4200, 0},
    {4260, 1},
    {4400, 0},
    {4480, 1},
    {4600, 0},
    {4660, 1},
    {4800, 0},
    {4860, 1},
    {4980, 0},
    {5060, 1},
    {5140, 0},
    {5240, 1},
    {5340, 0},
    {5400, 1},
    {5480, 0},
    {5520, 1},
    {5600, 0},
    {5780, 1},
    {5940, 0}
  }, {
    {20, 0},
    {3280, 1},
    {3360, 0},
    {3440, 1},
    {3580, 0},
    {3660, 1},
    {3780, 0},
    {3820, 1},
    {3880, 0},
    {3920, 1},
    {3980, 0},
    {4020, 1},
    {4060, 0},
    {4100, 1},
    {4160, 0},
    {4200, 1},
    {4280, 0},
    {4360, 1},
    {4500, 0},
    {4560, 1},
    {4640, 0},
    {4700, 1},
    {4780, 0},
    {4860, 1},
    {5180, 0},
    {5340, 1},
    {5480, 0},
    {5600, 1},
    {5760, 0},
    {5840, 1},
    {5940, 0},
    {6020, 1},
    {6160, 0},
    {6260, 1},
    {6460, 0},
    {6600, 1},
    {6780, 0}
  }, {
    {20, 0},
    {480, 1},
    {560, 0},
    {640, 1},
    {680, 0},
    {720, 1},
    {780, 0},
    {820, 1},
    {920, 0},
    {960, 1},
    {1100, 0},
    {1180, 1},
    {1260, 0},
    {1340, 1},
    {1460, 0},
    {1520, 1},
    {1560, 0},
    {1580, 1},
    {1620, 0},
    {1660, 1},
    {1720, 0},
    {1780, 1},
    {1900, 0},
    {1960, 1},
    {2140, 0},
    {5260, 1},
    {5580, 0}
  }, {
    {20, 0},
    {220, 1},
    {360, 0},
    {420, 1},
    {520, 0},
    {580, 1},
    {700, 0},
    {820, 1},
    {880, 0},
    {940, 1},
    {1000, 0},
    {1060, 1},
    {1120, 0},
    {1180, 1},
    {1240, 0},
    {1300, 1},
    {1360, 0},
    {1400, 1},
    {1460, 0},
    {1520, 1},
    {1660, 0},
    {2040, 1},
    {2120, 0},
    {2200, 1},
    {2320, 0},
    {2400, 1},
    {2500, 0},
    {2560, 1},
    {2620, 0},
    {2680, 1},
    {2780, 0},
    {2840, 1},
    {2920, 0},
    {2980, 1},
    {3060, 0},
    {3140, 1},
    {3260, 0},
    {3340, 1},
    {3480, 0},
    {3560, 1},
    {3620, 0},
    {3660, 1},
    {3700, 0},
    {3740, 1},
    {3800, 0},
    {3860, 1},
    {3980, 0},
    {4060, 1},
    {4240, 0}
  }, {
    {20, 0},
    {1600, 1},
    {1760, 0},
    {1840, 1},
    {2020, 0},
    {2180, 1},
    {2600, 0},
    {2900, 1},
    {3560, 0}
  }, {
    {20, 0},
    {1020, 1},
    {1080, 0},
    {1200, 1},
    {1280, 0},
    {1360, 1},
    {1440, 0},
    {1500, 1},
    {1560, 0},
    {1640, 1},
    {1780, 0},
    {1840, 1},
    {1960, 0},
    {2000, 1},
    {2060, 0},
    {2100, 1},
    {2140, 0},
    {2200, 1},
    {2300, 0},
    {2380, 1},
    {2440, 0},
    {2500, 1},
    {2560, 0},
    {2660, 1},
    {2760, 0},
    {2820, 1},
    {2940, 0},
    {3320, 1},
    {3380, 0},
    {3440, 1},
    {3480, 0},
    {3520, 1},
    {3640, 0},
    {3740, 1},
    {3960, 0},
    {4020, 1},
    {4060, 0},
    {4100, 1},
    {4140, 0},
    {4180, 1},
    {4280, 0},
    {4360, 1},
    {4440, 0},
    {4480, 1},
    {4600, 0},
    {4780, 1},
    {4960, 0}
  }, {
    {20, 0},
    {320, 1},
    {400, 0},
    {560, 1},
    {660, 0},
    {1140, 1},
    {1300, 0},
    {1360, 1},
    {1520, 0},
    {1600, 1},
    {1700, 0},
    {1780, 1},
    {1880, 0},
    {1960, 1},
    {2080, 0},
    {2200, 1},
    {2320, 0},
    {2400, 1},
    {2460, 0},
    {2520, 1},
    {2640, 0},
    {2760, 1},
    {2920, 0},
    {3020, 1},
    {3160, 0},
    {3240, 1},
    {3400, 0},
    {3560, 1},
    {3620, 0},
    {3820, 1},
    {3860, 0}
  }, {
    {20, 0},
    {1100, 1},
    {1180, 0},
    {1240, 1},
    {1340, 0},
    {1460, 1},
    {1600, 0},
    {1700, 1},
    {1880, 0},
    {3240, 1},
    {3320, 0},
    {3380, 1},
    {3500, 0},
    {3580, 1},
    {3660, 0},
    {3700, 1},
    {3780, 0},
    {3820, 1},
    {3900, 0},
    {3960, 1},
    {4040, 0},
    {4180, 1},
    {4360, 0},
    {6280, 1},
    {6400, 0},
    {6460, 1},
    {6560, 0},
    {6660, 1},
    {6800, 0},
    {6980, 1},
    {7060, 0},
    {7160, 1},
    {7300, 0}
  }, {
    {20, 0},
    {60, 1},
    {780, 0},
    {1320, 1},
    {1540, 0},
    {1760, 1},
    {1880, 0},
    {1960, 1},
    {2100, 0},
    {2260, 1},
    {2400, 0},
    {2500, 1},
    {2700, 0}
  }, {
    {20, 0},
    {1340, 1},
    {1660, 0},
    {1720, 1},
    {1840, 0},
    {2020, 1},
    {2120, 0},
    {2180, 1},
    {2300, 0},
    {2380, 1},
    {2500, 0},
    {2560, 1},
    {2720, 0},
    {2820, 1},
    {3000, 0}
  }, {
    {20, 0},
    {100, 1},
    {240, 0},
    {300, 1},
    {520, 0},
    {740, 1},
    {880, 0},
    {960, 1},
    {1060, 0},
    {1240, 1},
    {1420, 0},
    {1560, 1},
    {1720, 0},
    {1820, 1},
    {2060, 0},
    {2160, 1},
    {2240, 0},
    {2320, 1},
    {2400, 0},
    {2440, 1},
    {2500, 0},
    {2760, 1},
    {2980, 0},
    {3100, 1},
    {3260, 0},
    {3360, 1},
    {3640, 0}
  }, {
    {20, 0},
    {280, 1},
    {340, 0},
    {400, 1},
    {560, 0},
    {760, 1},
    {880, 0},
    {980, 1},
    {1140, 0},
    {1240, 1},
    {1360, 0},
    {1440, 1},
    {1560, 0},
    {1660, 1},
    {1760, 0},
    {1880, 1},
    {2080, 0},
    {2180, 1},
    {2260, 0},
    {2320, 1},
    {2540, 0},
    {2620, 1},
    {2780, 0},
    {2820, 1},
    {2900, 0},
    {3000, 1},
    {3280, 0},
    {3380, 1},
    {3580, 0},
    {3700, 1},
    {3800, 0},
    {3860, 1},
    {4100, 0},
    {4180, 1},
    {4360, 0},
    {4440, 1},
    {4600, 0},
    {4700, 1},
    {5100, 0}
  }, {
    {20, 0},
    {1100, 1},
    {1320, 0},
    {1400, 1},
    {1560, 0},
    {1700, 1},
    {1740, 0},
    {1800, 1},
    {1960, 0},
    {2040, 1},
    {2160, 0},
    {2260, 1},
    {2340, 0},
    {2380, 1},
    {2440, 0},
    {2500, 1},
    {2600, 0},
    {2660, 1},
    {2780, 0},
    {2820, 1},
    {2920, 0},
    {2960, 1},
    {3020, 0},
    {3140, 1},
    {3260, 0},
    {3320, 1},
    {3460, 0},
    {3520, 1},
    {3640, 0},
    {3700, 1},
    {3800, 0},
    {3940, 1},
    {4100, 0},
    {4200, 1},
    {4360, 0},
    {4420, 1},
    {4500, 0},
    {4660, 1},
    {4740, 0},
    {4880, 1},
    {4940, 0},
    {5020, 1},
    {5100, 0},
    {5200, 1},
    {5320, 0},
    {5400, 1},
    {5460, 0},
    {5520, 1},
    {5800, 0}
  }, {
    {20, 0},
    {160, 1},
    {340, 0},
    {480, 1},
    {880, 0},
    {1040, 1},
    {1180, 0},
    {1260, 1},
    {1340, 0},
    {1480, 1},
    {1700, 0},
    {1740, 1},
    {1880, 0},
    {1960, 1},
    {2100, 0},
    {2200, 1},
    {2300, 0},
    {2340, 1},
    {2480, 0},
    {2580, 1},
    {2780, 0},
    {2860, 1},
    {3000, 0},
    {3060, 1},
    {3280, 0}
  }, {
    {20, 0},
    {200, 1},
    {300, 0},
    {400, 1},
    {520, 0},
    {640, 1},
    {740, 0},
    {820, 1},
    {900, 0},
    {960, 1},
    {1040, 0},
    {1080, 1},
    {1200, 0},
    {1260, 1},
    {1360, 0},
    {1480, 1},
    {1620, 0},
    {1680, 1},
    {1780, 0},
    {1900, 1},
    {2120, 0},
    {2540, 1},
    {2600, 0},
    {2640, 1},
    {2780, 0},
    {2840, 1},
    {2920, 0},
    {2960, 1},
    {3040, 0},
    {3180, 1},
    {3260, 0},
    {3320, 1},
    {3480, 0},
    {3540, 1},
    {3680, 0},
    {3760, 1},
    {3800, 0},
    {3840, 1},
    {3940, 0},
    {4000, 1},
    {4100, 0},
    {4140, 1},
    {4240, 0},
    {4280, 1},
    {4340, 0},
    {4400, 1},
    {4480, 0},
    {4600, 1},
    {4700, 0},
    {4760, 1},
    {4940, 0},
  }
};


#endif
