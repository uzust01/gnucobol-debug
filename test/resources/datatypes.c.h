/* Generated by           cobc 3.1-dev.0 */
/* Generated from         /Users/bpacheco/dev/personal_git/cobol-hello-world/datatypes.cbl */
/* Generated at           May 19 2020 12:22:46 */
/* GnuCOBOL build date    May 16 2020 05:32:07 */
/* GnuCOBOL package date  May 11 2020 23:42:04 UTC */
/* Compile command        cobc -x -g -fsource-location -ftraceall -Q --coverage -A --coverage -v /Users/bpacheco/dev/personal_git/cobol-hello-world/datatypes.cbl */


/* Module path */
static const char		*cob_module_path = NULL;

/* Number of call parameters */
static int		cob_call_params = 0;

/* Picture strings */

static const cob_pic_symbol p_1[] = {
	{'$', 3},
	{',', 1},
	{'$', 2},
	{'9', 1},
	{'.', 1},
	{'9', 2},
	{'\0', 1}
};
static const cob_pic_symbol p_2[] = {
	{'Z', 9},
	{'9', 1},
	{'\0', 1}
};


/* Attributes */

static const cob_field_attr a_1 =	{0x01,   0,   0, 0x0000, NULL};
static const cob_field_attr a_2 =	{0x10,   2,   0, 0x0000, NULL};
static const cob_field_attr a_3 =	{0x10,   5,   2, 0x0001, NULL};
static const cob_field_attr a_4 =	{0x10,   5,   2, 0x0000, NULL};
static const cob_field_attr a_5 =	{0x21,   0,   0, 0x0000, NULL};
static const cob_field_attr a_6 =	{0x24,   7,   2, 0x0000, p_1};
static const cob_field_attr a_7 =	{0x24,  10,   0, 0x0000, p_2};
static const cob_field_attr a_8 =	{0x21,   0,   0, 0x1000, NULL};
static const cob_field_attr a_9 =	{0x10,   3,   0, 0x1000, NULL};


/* Constants */
static const cob_field c_1	= {14, (cob_u8_ptr)"END DISPLAYING", &a_8};
static const cob_field c_2	= {3, (cob_u8_ptr)"699", &a_9};
static const cob_field c_3	= {3, (cob_u8_ptr)"221", &a_9};


/* Strings */
static const char st_1[]	= "DATATYPES";
static const char st_2[]	= "0001-START";
static const char st_3[]	= "DISPLAY";
static const char st_4[]	= "STOP RUN";
static const char st_5[]	= "0001-END";


/* Source file names */
static const char *st_source_files[]	= { "" 
		,"/Users/bpacheco/dev/personal_git/cobol-hello-world/datatypes.cbl"};