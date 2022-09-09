
/* preset cool green theme */

const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000213", 
  [1] = "#ff292c",
  [2] = "#35bf5c",
  [3] = "#00E463",
	[4] = "#136edd",
	[5] = "#1469d1",
	[6] = "#35bf5c",
  [7] = "#82dccd",

  /* 8 bright colors */
  [8] = "#82dccd",
  [9] = "#ff292c", 
  [10] = "#35bf5c",
  [11] = "#00E463",
	[12] = "#136edd",
	[13] = "#1469d1",
	[14] = "#35bf5c",
  [15] = "#82dccd",

  /* special colors */
  [256] = "#000213", // background
  [257] = "#82dccd", // foreground
  [258] = "#82dccd", // cursor
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultbg = 0;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs= 258;
