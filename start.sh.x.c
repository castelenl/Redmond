#if 0
	shc Version 3.9.6, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f start.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[4]))
	"\060\014\351\145\051\305\027\126\213\163\224\017\352\147\256\045"
	"\323\226\305\047\053\235\356\263\334"
#define      chk1_z	22
#define      chk1	((&data[28]))
	"\124\273\221\104\352\332\104\146\077\113\123\377\322\346\166\016"
	"\075\212\220\143\331\246\154\235\004\207\131\140\014\174"
#define      xecc_z	15
#define      xecc	((&data[56]))
	"\063\161\163\014\241\077\357\043\267\242\172\222\230\033\051\366"
	"\315\057\300"
#define      tst1_z	22
#define      tst1	((&data[77]))
	"\210\064\362\137\336\141\125\012\114\105\267\272\036\211\274\115"
	"\102\344\035\260\077\323\101\224\260"
#define      msg1_z	65
#define      msg1	((&data[105]))
	"\002\312\262\336\134\065\172\066\212\040\333\033\372\224\246\221"
	"\321\141\250\116\345\017\327\256\113\373\221\064\250\173\107\162"
	"\156\246\114\176\023\206\225\231\106\157\306\034\347\174\312\302"
	"\217\116\321\357\256\024\353\261\360\147\157\332\053\270\055\327"
	"\117\001\336\001\012\011\023\327\260\360\151\070\112\312\104\307"
	"\051\235\255\134\152\334\035"
#define      tst2_z	19
#define      tst2	((&data[188]))
	"\163\236\073\317\013\177\101\210\313\226\171\005\005\216\326\014"
	"\237\141\141\234\113\063"
#define      rlax_z	1
#define      rlax	((&data[208]))
	"\044"
#define      opts_z	1
#define      opts	((&data[209]))
	"\216"
#define      lsto_z	1
#define      lsto	((&data[210]))
	"\057"
#define      inlo_z	3
#define      inlo	((&data[211]))
	"\210\270\017"
#define      text_z	1230
#define      text	((&data[237]))
	"\171\130\036\242\366\313\377\141\250\035\114\022\135\277\260\220"
	"\114\264\303\333\202\251\111\374\070\313\204\053\276\230\107\076"
	"\172\077\344\255\311\152\050\007\207\350\067\012\031\342\111\100"
	"\066\350\141\201\031\330\253\300\167\306\224\016\145\213\027\064"
	"\222\106\023\162\074\317\076\160\260\163\253\350\361\025\012\310"
	"\234\013\315\112\135\026\204\005\361\223\010\000\044\217\236\240"
	"\164\305\216\100\154\036\220\126\225\140\020\034\125\267\021\230"
	"\040\271\136\364\142\057\345\357\332\332\131\061\212\022\331\163"
	"\163\333\124\033\350\257\154\131\145\137\334\152\014\144\114\077"
	"\155\271\355\132\026\112\141\135\157\335\207\231\017\032\323\347"
	"\051\027\230\056\321\375\150\251\121\172\077\177\241\321\366\343"
	"\105\270\127\364\302\037\360\243\153\260\111\050\052\260\035\310"
	"\011\370\225\070\262\156\137\366\342\334\220\334\252\246\255\332"
	"\075\002\153\170\070\036\036\230\226\143\035\152\240\322\226\223"
	"\055\044\034\367\174\045\205\363\036\035\006\200\251\102\237\107"
	"\200\334\271\055\256\267\260\253\137\176\335\036\325\366\062\225"
	"\153\145\033\313\277\143\323\234\314\353\373\303\036\206\032\151"
	"\332\365\360\204\304\123\263\025\052\147\015\121\270\273\242\061"
	"\320\356\225\243\132\036\027\233\156\313\354\136\147\226\340\042"
	"\170\157\056\015\177\067\224\121\053\151\177\274\311\067\050\133"
	"\205\021\373\306\253\335\127\132\371\312\200\122\243\151\315\001"
	"\165\122\174\170\136\160\103\301\114\314\010\355\053\013\141\106"
	"\162\061\017\151\345\200\020\170\051\354\213\174\151\206\374\053"
	"\143\042\337\356\026\170\010\225\012\110\325\367\141\027\044\355"
	"\072\024\366\257\364\261\271\332\037\160\217\031\170\225\212\360"
	"\213\302\065\370\012\205\161\124\140\020\170\116\275\217\232\306"
	"\101\371\202\246\271\314\261\020\051\067\023\216\200\351\235\102"
	"\123\126\367\131\173\320\341\272\131\301\045\031\350\207\147\230"
	"\041\217\106\136\016\023\165\215\244\121\044\320\105\310\126\042"
	"\257\310\120\066\262\156\112\345\227\177\071\211\265\313\272\107"
	"\362\245\342\226\323\314\176\361\222\025\300\174\171\105\313\110"
	"\376\131\134\327\265\000\163\353\172\224\347\205\272\140\226\230"
	"\015\066\167\261\146\355\050\014\331\001\100\155\154\221\347\104"
	"\377\207\010\212\320\355\145\334\361\157\220\055\007\373\242\110"
	"\243\117\075\112\133\243\333\172\173\162\125\361\015\305\047\246"
	"\300\075\053\330\032\255\007\056\026\032\312\023\152\237\312\071"
	"\213\336\172\141\332\264\173\365\054\306\342\152\273\216\151\000"
	"\111\131\106\100\157\012\263\275\155\017\362\166\321\144\156\105"
	"\223\237\156\125\346\050\321\246\214\124\100\201\163\342\045\347"
	"\155\102\253\057\227\210\154\150\113\116\361\236\227\067\063\042"
	"\222\065\235\161\124\230\227\254\063\243\156\322\030\127\024\277"
	"\277\341\176\246\204\370\267\347\302\231\315\272\023\333\362\213"
	"\235\377\202\250\000\114\133\350\305\057\135\122\351\020\173\245"
	"\232\372\036\313\167\053\237\132\164\132\146\245\223\137\331\303"
	"\263\306\253\023\255\245\312\203\022\325\134\173\364\221\255\353"
	"\214\044\113\273\225\022\244\175\076\301\335\334\257\303\330\255"
	"\006\353\250\052\042\003\372\036\364\364\063\367\141\024\364\316"
	"\270\014\374\015\202\173\253\065\153\332\051\074\115\246\357\150"
	"\306\107\203\043\073\000\011\177\341\312\042\051\366\210\036\303"
	"\170\140\101\342\017\032\260\204\210\136\115\037\350\042\075\327"
	"\323\374\362\335\063\347\336\134\337\355\024\310\215\160\132\261"
	"\206\141\220\213\240\264\344\266\113\212\011\131\007\061\073\241"
	"\321\325\364\073\324\142\377\243\074\051\257\277\230\216\171\120"
	"\062\301\044\054\206\005\374\147\116\334\141\213\313\043\325\267"
	"\224\123\364\356\104\336\037\057\221\257\077\124\116\362\136\316"
	"\331\154\061\021\060\252\221\245\272\160\110\020\167\345\252\143"
	"\044\302\067\265\245\227\065\040\272\270\127\153\336\136\366\163"
	"\133\321\013\352\057\036\151\011\335\172\034\321\040\362\014\150"
	"\142\011\327\330\034\336\377\246\243\016\235\110\176\363\074\134"
	"\063\274\213\105\273\375\216\102\240\077\253\276\066\015\113\013"
	"\116\067\237\333\250\347\161\303\115\040\247\266\204\101\232\247"
	"\000\121\306\067\237\203\160\262\144\345\370\233\070\347\145\135"
	"\350\100\163\216\327\143\160\062\253\115\364\224\362\213\063\011"
	"\260\354\005\051\270\040\207\233\150\170\102\017\141\160\025\071"
	"\173\245\371\077\356\141\070\314\220\002\003\132\320\063\077\241"
	"\065\331\253\100\371\377\217\304\252\253\152\015\127\254\371\364"
	"\363\163\127\153\261\351\160\115\107\256\265\245\161\075\167\262"
	"\046\141\106\337\035\073\105\103\031\354\226\161\023\333\131\126"
	"\113\174\077\267\010\374\115\273\011\141\124\245\226\140\004\235"
	"\060\212\064\130\247\164\065\276\110\152\002\152\004\200\010\266"
	"\323\364\163\071\071\232\277\137\024\330\043\076\357\136\311\326"
	"\074\170\112\066\171\014\151\255\167\120\175\071\163\042\103\307"
	"\221\116\105\230\012\330\166\076\153\371\340\210\310\220\360\175"
	"\266\247\170\115\254\204\333\305\163\324\065\075\104\304\371\305"
	"\130\034\145\075\176\054\062\204\242\011\017\041\001\366\150\260"
	"\323\264\355\044\347\175\114\315\361\315\240\114\267\112\111\301"
	"\216\206\001\377\246\317\016\325\356\354\204\105\114\272\147\370"
	"\343\022\354\311\355\330\145\205\115\200\037\114\052\016\066\174"
	"\134\113\335\064\277\255\305\216\210\321\075\234\050\266\364\106"
	"\131\353\022\130\114\273\166\230\315\323\130\176\144\244\063\047"
	"\177\266\321\311\143\226\127\353\147\225\210\220\114\174\327\245"
	"\150\352\376\264\245\164\114\163\110\244\362\254\111\045\324\311"
	"\334\245\222\077\073\352\053\243\177\263\063\313\060\013\160\230"
	"\365\157\114\233\343\231\017\053\076\001\330\207\047\254\121\003"
	"\121\343\103\215\315\156\060\115\042\144\030\122\157"
#define      chk2_z	19
#define      chk2	((&data[1575]))
	"\370\067\001\333\306\346\155\362\047\157\150\026\266\224\307\014"
	"\136\006\117\236\007\022\105\321"
#define      pswd_z	256
#define      pswd	((&data[1596]))
	"\021\206\315\370\070\207\227\316\260\004\207\324\242\364\037\337"
	"\305\141\222\206\335\230\004\371\166\204\253\031\024\125\132\254"
	"\333\047\244\024\257\074\342\137\101\152\064\344\137\123\303\044"
	"\265\126\253\222\356\260\213\145\064\067\177\110\215\331\364\150"
	"\001\231\175\260\326\140\020\027\312\105\374\051\230\277\116\115"
	"\025\371\340\004\251\154\151\336\244\350\047\061\302\034\232\304"
	"\265\030\165\214\170\205\244\103\313\240\154\144\137\273\262\165"
	"\264\223\172\136\377\343\075\244\314\144\326\217\200\161\123\066"
	"\211\311\302\001\117\146\104\032\006\261\176\146\154\060\333\041"
	"\303\125\200\303\071\275\147\006\041\076\226\242\257\352\330\070"
	"\263\232\072\002\001\177\034\010\061\233\156\235\313\112\277\217"
	"\237\077\122\331\375\272\340\036\370\166\301\250\141\231\341\024"
	"\064\033\027\065\233\064\076\314\317\254\152\232\366\051\051\226"
	"\150\174\160\145\066\120\204\056\307\106\327\050\337\270\075\024"
	"\324\125\112\157\211\210\074\130\065\246\363\054\317\034\302\070"
	"\230\063\236\317\204\043\375\114\151\324\165\111\215\262\135\141"
	"\007\337\227\071"
#define      date_z	1
#define      date	((&data[1855]))
	"\155"
#define      shll_z	8
#define      shll	((&data[1858]))
	"\152\231\070\202\017\225\367\350\163\130\357"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}