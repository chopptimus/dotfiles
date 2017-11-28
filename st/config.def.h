char font[] = "Source Code Pro:size=11:antialias=true:autohint=false";

const char *colorname[] = {
	/* 8 normal colors */
	"#282c34",
	"#e06c75",
	"#98c379",
	"#e5c07b",
	"#61afef",
	"#c678dd",
	"#56b6c2",
	"#abb2bf",
    "#3e4452",
	"#be5046",
	"#93c379",
	"#d19a66",
	"#61afef",
	"#c678dd",
	"#56b6c2",
	"#5c6670",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
};

/* Kerning / character bounding-box multipliers */
float cwscale = 1.0;
float chscale = 1.0;

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
unsigned int defaultcs = 256;
unsigned int defaultrcs = 257;

/*
 * Default shape of cursor
 * 2: Block ("█")
 * 4: Underline ("_")
 * 6: Bar ("|")
 * 7: Snowman ("☃")
 */
unsigned int cursorshape = 2;
