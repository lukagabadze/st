
/* preset cool blue theme */

const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000",
  [1] = "#867A8E",
  [2] = "#2784BD",
  [3] = "#6689B2",
  [4] = "#028BD5",
  [5] = "#1F9ADD",
  [6] = "#67A0D6",
  [7] = "#bfd0e8",

  /* 8 bright colors */
  [8]  = "#000000",
  [9]  = "#867A8E",
  [10] = "#2784BD",
  [11] = "#6689B2",
  [12] = "#028BD5",
  [13] = "#1F9ADD",
  [14] = "#67A0D6",
  [15] = "#bfd0e8",

  /* special colors */
  [256] = "#383b12", /* background */
  [257] = "#bfd0e8", /* foreground */
  [258] = "#bfd0e8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
