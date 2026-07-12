#include <stdio.h>
#include <string.h>

int main() {
    char repetir[4] = "Sim";
    while (strcmp(repetir, "Sim") == 0) {
        int x;
        printf("Escolhas:\n 1 - Área\n 2 - Capacidade\n 3 - Comprimento\n 4 - Peso\n 5 - Temperatura\n 6 - Velocidade\n");
        printf("Por favor digite um número: ");
        scanf("%d", &x);

        switch (x) {
            case 1: {
                double n1;
                printf("Digite um valor em m²: ");
                scanf("%lf", &n1);
                double a = n1;
                double b = n1 * 100;
                double c = n1 * 10000;
                double d = n1 * 1000000;
                double e = n1 * 1e30;
                double f = n1 / 1000000;
                double g = n1 / 10000;
                double h = n1 / 1000;
                double i = n1 / 100;

                double j = n1 * 1073 / 100000000000;
                double k = n1 * 3861 / 10000000000;
                double l = n1 * 1544 / 1000000000;
                double m = n1 * 2471 / 10000000;
                double n = n1 * 9884 / 10000000;
                double o = n1 * 3954 / 100000;
                double p = n1 * 3954 / 100000;
                double q = n1 * 1196 / 1000;
                double r = n1 * 1076 / 100;
                double s = n1 * 1550;
                double t = n1 * 1550003100;

                double u = n1 * 3025 / 100;
                double v = n1 * 3025 / 1000;
                double w = n1 * 605 / 1000;
                double x = n1 * 3025 / 10000;
                double y = n1 * 3025 / 10000;
                double z = n1 * 1008 / 100000;
                double aa = n1 * 1008 / 1000000;
                double ab = n1 * 1008 / 10000000;

                double ac = n1 * 15 / 1000000;
                double ad = n1 * 15 / 10000;
                double ae = n1 * 15 / 1000;
                double af = n1 * 9 / 100;
                double ag = n1 * 15 / 100;
                double ah = n1 * 15 / 10;
                double ai = n1 * 9;
                double aj = n1 * 900;

                double ak = n1 * 1628 / 100000000;
                double al = n1 * 1628 / 1000000;
                double am = n1 * 1628 / 100000;
                double an = n1 * 9766 / 100000;
                double ao = n1 * 1628 / 10000;
                double ap = n1 * 1628 / 1000;
                double aq = n1 * 9766 / 1000;
                double ar = n1 * 9766 / 10;

                double ba = n1 * 625 / 1000000;
                double bb = n1 * 25 / 10000;
                double bc = n1 * 25 / 100;

                double bd = n1 * 1053 / 1000000;
                double be = n1 * 4211 / 1000000;
                double bf = n1 * 6316 / 1000000;
                double bg = n1 * 1263 / 100000;
                double bh = n1 * 2437 / 100000;
                double bi = n1 * 2924 / 100000;
                double bj = n1 * 1053 / 10000;
                double bk = n1 * 2924 / 10000;
                double bl = n1 * 4211 / 10000;
                double bm = n1 * 1053 / 100;

                double bn = n1 * 4249 / 10000000000;
                double bo = n1 * 17 / 10000000;
                double bp = n1 * 17 / 100000;
                double bq = n1 * 3399 / 10000000;
                double br = n1 * 6799 / 10000000;
                double bs = n1 * 272 / 100000;
                double bt = n1 * 2448 / 100000;
                double bu = n1 * 979 / 10000;
                double bv = n1 * 979 / 100;
                double bw = n1 * 114 / 10;

                double bx = n1 * 2925 / 10000000;
                double by = n1 * 2925 / 100000;
                double bz = n1 * 2632 / 10000;
                double ca = n1 * 9477 / 1000;
                double cb = n1 * 1365 / 1000;

                double cc = n1 * 5725 / 100000000000;
                double cd = n1 * 1431 / 1000000000;
                double ce = n1 * 2588 / 1000000000;
                double cf = n1 * 3106 / 1000000000;
                double cg = n1 * 1553 / 10000000;
                double ch = n1 * 2236 / 10000000;
                double ci = n1 * 2544 / 10000000;
                double cj = n1 * 1863 / 1000000;
                double ck = n1 * 7454 / 1000000;
                double cl = n1 * 8945 / 100000;
                double cm = n1 * 1431 / 1000;
                double cn = n1 * 1288 / 100;

                double co = n1 * 2066 / 10000;
                double cp = n1 * 8264 / 10000;
                double cq = n1 * 2066 / 100;
                double cr = n1 * 1322;

                double cs = n1 * 9153 / 100000000;
                double ct = n1 * 6865 / 100000000;
                double cu = n1 * 8787 / 10000000000;
                double cv = n1 * 1977 / 1000;
                double cw = n1 * 1176 / 100;

                double cx = n1 / 1000;
                double cy = n1 / 1000;
                double cz = n1 * 2446 / 1000000;
                double da = n1 / 1000;
                double db = n1 / 1000;
                double dc = n1 * 7874 / 10000000;
                double dd = n1 * 4 / 10000;
                double de = n1 / 1000;
                double df = n1 * 1088 / 1000000;
                double dg = n1 * 2381 / 10000000;
                double dh = n1 * 5714 / 1000000;
                double di = n1 / 10000;
                double dj = n1 * 1197 / 10000000;
                double dk = n1 * 1431 / 10000000;
                double dl = n1 * 1417 / 10000000;
                double dm = n1 * 1434 / 10000000;
                double dn = n1 * 1429 / 10000000;
                double doo = n1 * 5928 / 100000000;
                double dp = n1 * 6359 / 100000000;
                double dq = n1 * 1417 / 10000000;
                double dr = n1 * 1333 / 10000000;
                double ds = n1 / 10000;
                double dt = n1 * 1355 / 10000000;
                double du = n1 * 1563 / 1000;
                double dv = n1 * 1417 / 1000;
                double dw = n1 * 1391 / 1000;
                double dx = n1 * 1336 / 1000;
                double dy = n1 * 8264 / 10000;

                double dz = n1 * 1974;
                double ea = n1 * 1973525;
                double eb = n1 * 1973525241;

                double ec = n1 / 1e72 * 3828;

                printf("-------MEDIDAS MÉTRICAS-------\n");
                printf("%lf m² | %lf dm² | %lf cm² | %lf mm² | %lf b | %lf km² | %lf hectare | %lf decare | %lf a |\n", a, b, c, d, e, f, g, h, i);

                printf("-------EUA E INGLATERRA-------\n");
                printf("%lf township |%lf milha quadrada |%lf homestead |%lf acre |%lf rood |%lf rod quadrado |%lf perch |%lf yd² |%lf ft² |%lf in² |%lf th² |\n", j, k, l, m, n, o, p, q, r, s, t);

                printf("------------JAPÃO------------\n");
                printf("%lf shaku |%lf go |%lf jo |%lf tsubo |%lf bu |%lf se |%lf tan |%lf cho |\n", u, v, w, x, y, z, aa, ab);

                printf("-------CHINA 1915#1930-------\n");
                printf("%lf qing |%lf mu |%lf fen |%lf fang zhang |%lf li - 㢆 ou 釐 |%lf hao |%lf fang chi |%lf fang cun |\n", ac, ad, ae, af, ag, ah, ai, aj);

                printf("-------CHINA 1930#HOJE-------\n");
                printf("%lf qing |%lf mu |%lf fen |%lf fang zhang |%lf li - 㢆 ou 釐 |%lf hao |%lf fang chi |%lf fang cun |\n", ak, al, am, an, ao, ap, aq, ar);

                printf("----------TAILÂNDIA----------\n");
                printf("%lf rai |%lf ngan |%lf tarang wah |\n", ba, bb, bc);

                printf("------------GRÉCIA------------\n");
                printf("%lf plethron |%lf aroura |%lf hektos |%lf hēmiektos |%lf dodecaorgion |%lf decaorgion |%lf akaina |%lf hexapodēs ou orgya |%lf bema ou diploum |%lf pous |\n", bd, be, bf, bg, bh, bi, bj, bk, bl, bm);

                printf("-------------ROMA-------------\n");
                printf("%lf saltus |%lf centurium |%lf geredium |%lf uger |%lf akt quadrado |%lf klima |%lf akt quadrado pequeno |%lf decimpeda quadrada |%lf ped quadrado comum |%lf ped quadrado legal |\n", bn, bo, bp, bq, br, bs, bt, bu, bv, bw);

                printf("--------FRANCÊS ANTIGO--------\n");
                printf("%lf arpent |%lf perche |%lf toise quadrada |%lf pied |%lf pouce |\n", bx, by, bz, ca, cb);

                printf("--------ESPANHA ANTIGA--------\n");
                printf("%lf legua |%lf labor |%lf caballería |%lf yugada |%lf fanegada |%lf aranzada |%lf cuerda de Puerto Rico |%lf celemin |%lf cuartillo |%lf estadal cuadrado |%lf vara cuadrada |%lf pie cuadrado |\n", cc, cd, ce, cf, cg, ch, ci, cj, ck, cl, cm, cn);

                printf("-------PORTUGAL ANTIGO-------\n");
                printf("%lf braça quadrada |%lf vara quadrada |%lf palmo quadrado |%lf polegada quadrada |\n", co, cp, cq, cr);

                printf("--------RÚSSIA ANTIGA--------\n");
                printf("%lf desyatina país |%lf desyatina fazendeiros |%lf verst quadrado |%lf arshin quadrado |%lf pé quadrado |\n", cs, ct, cu, cv, cw);

                printf("---------AINDA EM USO---------\n");
                printf("%lf dulum (дулум) da Bósnia, Herzegovina e Sérvia |%lf dynym ou dylym da Albânia |%lf donum do Chipre |%lf skales (σκάλες) do Chipre |%lf stremma grega |%lf stremma turca da Grécia |%lf dunam do Iraque |%lf dunam (dönüm, دونم) da Turquia, Síria, Israel, Palestina, Jordânia, Líbano |%lf dunam (dönüm, دونم) antigo (anterior a 1928) da Turquia, Síria, Israel, Palestina, Jordânia, Líbano |%lf feddan (فدّان) do Egito, Sudão, Síria, Omã |%lf kirat (قيراط) do Egito |%lf manzana da Argentina |%lf manzana da Belize |%lf manzana da Costa Rica |%lf manzana da Guatemala |%lf manzana da Honduras |%lf manzana da Nicarágua |%lf cuadra da Argentina |%lf cuadra do Chile |%lf cuadra do Equador |%lf cuadra do Paraguai |%lf cuadra do Peru |%lf cuadra do Uruguai |%lf vara quadrada do Panamá e da Colômbia |%lf vara quadrada do Chile, Costa Rica, República Dominicana, Equador, El Salvador, Guatemala, Honduras, México, Nicarágua, Peru, São Tomé e Príncipe, Venezuela |%lf vara quadrada de Cuba |%lf vara quadrada da Argentina, Paraguai, Uruguai |%lf vara quadrada do Brasil |\n", cx, cy, cz, da, db, dc, dd, de, df, dg, dh, di, dj, dk, dl, dm, dn, doo, dp, dq, dr, ds, dt, du, dv, dw, dx, dy);

                printf("-------BITOLA DOS FIOS-------\n");
                printf("%lf polegada circular |%lf kcmil, MCM |%lf cmil |\n", dz, ea, eb);

                printf("-----------NATURAIS-----------\n");
                printf("%lf L² |\n", ec);

                printf("A CATEC agradece a sua consulta!\n");
                break;
            }
            case 2: {
                double n1;
                printf("Digite um valor em l: ");
                scanf("%lf", &n1);
                double a = n1 / 100;
                double b = n1 / 10;
                double c = n1;
                double d = n1 * 10;
                double e = n1 * 100;
                double f = n1 * 1000;
                double g = n1 * 1000000;
                double h = n1 / 1000000000000;
                double i = n1 / 1000;
                double j = n1;
                double k = n1 * 1000;
                double l = n1 * 1000000;

                double m = n1 / 10000000000 * 8107;
                double n = n1 / 100000 * 629;
                double o = n1 / 10000 * 2642;
                double p = n1 / 1000 * 1057;
                double q = n1 / 1000 * 2113;
                double r = n1 / 1000 * 8454;
                double s = n1 / 100 * 3381;
                double t = n1 / 10 * 2705;
                double u = n1 * 16231;

                double v = n1 / 1000000 *  8648;
                double w = n1 / 100000 * 2838;
                double x = n1 / 10000 * 1135;
                double y = n1 / 1000 * 227;
                double z = n1 / 10000 * 9081;
                double aa = n1 / 1000 * 1816;

                double ab = n1 / 1000 * 2113;
                double ac = n1 / 1000 * 4227;
                double ad = n1 / 1000 * 4227;
                double ae = n1 / 1000 * 6763;
                double af = n1 / 100 * 1691;
                double ag = n1 / 100 * 3381;
                double ah = n1 / 100 * 6763;
                double ai = n1 / 10 * 1353;
                double aj = n1 / 10 * 2705;
                double ak = n1 / 10 * 2705;
                double al = n1 * 16231;

                double au = n1 / 1000000 * 1427;
                double av = n1 / 100000 * 611;
                double aw = n1 / 10000 * 275;
                double ax = n1 / 100 * 11;
                double ay = n1 / 100 * 22;
                double az = n1 / 10000 * 8799;
                double ba = n1 / 100 * 176;
                double bb = n1 / 10 * 352;
                double bc = n1 / 10 * 2816;
                double bd = n1 / 10 * 8447;
                double be = n1 * 16894;

                double bf = n1 / 10000000000000000 * 2399;
                double bg = n1 / 100000000 * 3531;
                double bh = n1 / 1000000 * 1308;
                double bi = n1 / 10000000 * 3531;
                double bj = n1 / 100000 * 3531;
                double bk = n1 / 100 * 6102;

                double bl = n1 / 1000000 * 1047;
                double bm = n1 / 1000000 * 2095;
                double bn = n1 / 1000000 * 3142;
                double bo = n1 / 100000 * 419;
                double bp = n1 / 1000000 * 6285;
                double bq = n1 / 100000 * 838;
                double br = n1 / 100000 * 1466;

                double bs = n1 / 1000000 * 1018;
                double bt = n1 / 100000 * 611;
                double bu = n1 / 100000 * 1222;
                double bv = n1 / 100000 * 1222 * 2;
                double bw = n1 / 100000 * 1222 * 4;

                double bx = n1 / 1000000 * 8522;
                double by = n1 / 100000 * 1704;
                double bz = n1 / 100000 * 1704;
                double ca = n1 / 100000 * 3409;

                double cb = n1 / 1000 * 4227;
                double cc = n1 / 100 * 6763;
                double cd = n1 / 10 * 2029;

                double ce = n1 * 50;
                double cf = n1 * 100;
                double cg = n1 * 200;

                double ch = n1 / 1000 * 4167;
                double ci = n1 / 100 * 6667;
                double cj = n1 * 200;

                double ck = n1 * 23673177579607 * 1e88;

                double cl = n1 / 1e56 * 3404;
                double cm = n1 / 1e54 * 1181;
                double cn = n1 / 1e37 * 1718;
                double co = n1 / 1e32 * 3711;

                double cp = n1 / 100000 * 14;
                double cq = n1 / 10000000 * 3531;
                double cr = n1 / 10000000 * 3531;

                double cs = n1 / 10000000000 * 4238;
                double ct = n1 / 10000000 * 2759;
                double cu = n1 / 10000000 * 4238;
                double cv = n1 / 10000000 * 5547;
                double cw = n1 / 10000000 * 8829;
                double cx = n1 / 1000 * 1;
                double cy = n1 / 100000 * 2774;
                double cz = n1 / 10000 * 4238;

                double da = n1 / 10 * 5544;
                double db = n1 / 100 * 5544;
                double dc = n1 / 1000 * 5544;
                double dd = n1 / 10000 * 5544;
                double de = n1 / 100000 * 5544;
                double df = n1 / 1000000 * 5544;

                double dg = n1 / 1000000 * 9657;
                double dh = n1 / 100000 * 1931;
                double di = n1 / 100000 * 9657;
                double dj = n1 / 10000 * 9657;
                double dk = n1 / 1000 * 9657;
                double dl = n1 / 100 * 9657;

                double dm = n1 / 100;
                double dn = n1 / 10;
                double doo = n1;
                double dp = n1 * 10;
                double dq = n1 * 100;
                double dr = n1 * 1000;

                double ds = n1 * 5 / 10000;
                double dt = n1 * 4 / 100;
                double du = n1 * 5 / 100;
                double dv = n1 * 1;
                double dw = n1 * 8;
                double dx = n1 * 32;
                double dy = n1 * 128;

                double dz = n1 / 100000 * 1957;
                double ea = n1 / 10000 * 1174;
                double eb = n1 / 10000 * 2348;
                double ec = n1 / 10000 * 9393;
                double ed = n1 / 1000 * 1879;
                double ee = n1 / 1000 * 3757;
                double ef = n1 / 100 * 1503;
                double eg = n1 / 100 * 2254;
                double eh = n1 / 10 * 2254;

                double ei = n1 / 100000 * 2609;
                double ej = n1 / 100000 * 3914;
                double ek = n1 / 10000 * 3131;
                double el = n1 / 1000 * 1879;
                double em = n1 / 1000 * 3757;
                double en = n1 / 1000 * 7514;
                double eo = n1 / 100 * 1503;
                double ep = n1 / 100 * 2254;
                double eq = n1 / 100 * 4509;
                double er = n1 / 100 * 9017;
                double es = n1 / 10 * 1127;
                double et = n1 / 10 * 2254;

                double eu = n1 / 1000000 * 1928;
                double ev = n1 / 100000 * 3856;
                double ew = n1 / 100000 * 7712;
                double ex = n1 / 100000 * 7712;
                double ey = n1 / 10000 * 1157;
                double ez = n1 / 10000 * 2314;
                double fa = n1 / 10000 * 3085;
                double fb = n1 / 1000 * 1851;
                double fc = n1 / 1000 * 3702;
                double fd = n1 / 1000 * 3702;
                double fe = n1 / 1000 * 5552;
                double ff = n1 / 1000 * 7403;
                double fg = n1 / 10 * 111;
                double fh = n1 / 100 * 1481;
                double fi = n1 / 100 * 2221;
                double fj = n1 / 100 * 8884;

                double fk = n1 / 1000000 * 1502;
                double fl = n1 / 100000 * 1802;
                double fm = n1 / 100000 * 7209;
                double fn = n1 / 10000 * 2163;
                double fo = n1 / 10000 * 4325;
                double fp = n1 / 10000 * 8651;
                double fq = n1 / 10000 * 2163;

                double fr = n1 / 1000000 * 3875;
                double fs = n1 / 1000 * 62;
                double ft = n1 / 1000 * 62;
                double fu = n1 / 1000 * 496;
                double fv = n1 / 1000 * 1323;
                double fw = n1 / 1000 * 1984;
                double fx = n1 / 1000 * 7937;
                double fy = n1 / 1000 * 7943;
                double fz = n1 / 1000 * 7937;

                double ga = n1 / 1000000 * 1208;
                double gb = n1 / 100000 * 1812;
                double gc = n1 / 100000 * 7246;
                double gd = n1 / 10000 * 2899;
                double ge = n1 / 10000 * 5797;
                double gf = n1 / 1000 * 1159;
                double gg = n1 / 1000 * 2319;
                double gh = n1 / 1000 * 4638;
                double gi = n1 / 1000 * 9275;

                double gj = n1 / 100000 * 119;
                double gk = n1 / 1000000 * 2381;
                double gl = n1 / 100000 * 5952;
                double gm = n1 / 100000 * 5952;
                double gn = n1 / 1000 * 119;
                double go = n1 / 10000 * 7143;
                double gp = n1 / 1000 * 2857;
                double gq = n1 / 1000 * 5714;
                double gr = n1 / 100 * 1143;

                double gs = n1 / 100000 * 2941;
                double gt = n1 / 1000 * 1203;

                double gu = n1 / 100000 * 3811;
                double gv = n1 / 10000 * 813;
                double gw = n1 / 10000 * 3049;

                double gx = n1 / 10000 * 813;
                double gy = n1 / 1000 * 813;
                double gz = n1 / 10000 * 3252;
                double ha = n1 / 1000 * 1301;
                double hb = n1 / 1000 * 1626;
                double hc = n1 / 100 * 813;
                double hd = n1 / 100 * 1626;

                double he = n1 / 1000000 * 4545;
                double hf = n1 / 1000000 * 9091;
                double hg = n1 / 100000 * 4545;
                double hh = n1 / 10000 * 1364;
                double hi = n1 / 10000 * 8182;
                double hj = n1 / 1000 * 3273;
                double hk = n1 / 100 * 1964;
                double hl = n1 / 100 * 3927;

                double hm = n1 / 100000 * 4545;
                double hn = n1 / 10000 * 2727;
                double ho = n1 / 1000 * 3273;

                printf("-------MEDIDAS MÉTRICAS-------\n");
                printf("%lf hl |%lf decalitro |%lf l |%lf dl |%lf cl |%lf ml |%lf µl |%lf km³ |%lf m³ |%lf dm³ |%lf cc |%lf mm³ |\n", a, b, c, d, e, f, g, h, i, j, k, l);

                printf("---------EUA LÍQUIDOS---------\n");
                printf("%lf acre-pé |%lf barril (petróleo) |%lf gal |%lf qt |%lf pt |%lf gill |%lf fl oz |%lf fl dr |%lf min |\n", m, n, o, p, q, r, s, t, u);

                printf("----------EUA SECOS----------\n");
                printf("%lf barril |%lf bu |%lf pk |%lf gal |%lf qt |%lf pt |\n", v, w, x, y, z, aa);

                printf("---------APOTHECARIES---------\n");
                printf("%lf pt |%lf copo de vidro |%lf xícara de café da manhã |%lf xícara de chá |%lf taça de vinho |%lf ƒ℥ |%lf colher de sopa |%lf colher de sobremesa |%lf ƒʒ |%lf colher de chá |%lf minim |\n", ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al);

                printf("----------INGLATERRA----------\n");
                printf("%lf perch |%lf barril |%lf bu |%lf pk |%lf gal |%lf qt |%lf pt |%lf oz |%lf fl dr |%lf escrópulo líquido |%lf min |\n", au, av, aw, ax, ay, az, ba, bb, bc, bd, be);

                printf("--------EUA/INGLATERRA--------\n");
                printf("%lf mi³ |%lf mcf |%lf yd³ |%lf ccf |%lf ft³ |%lf in³ |\n", bf, bg, bh, bi, bj, bk);

                printf("-------INGLATERRA|VINHO-------\n");
                printf("%lf tun |%lf butt |%lf puncheon |%lf hogsheads |%lf tierce |%lf barril |%lf rundlet |\n", bl, bm, bn, bo, bp, bq, br);

                printf("------INGLATERRA|CERVEJA------\n");
                printf("%lf hogsheads |%lf barril |%lf kilderkin |%lf firkin |%lf pin |\n", bs, bt, bu, bv, bw);

                printf("---------EUA|CERVEJA---------\n");
                printf("%lf Barril de cerveja norte-americano |%lf Meio-barril de cerveja norte-americano |%lf Barrilete de cerveja norte-americano (típico) |%lf Quarto de barril de cerveja norte-americano |\n", bx, by, bz, ca);

                printf("--------EUA~CULINÁRIA--------\n");
                printf("%lf xícara |%lf colher de sopa |%lf colher de chá |\n", cb, cc, cd);

                printf("-----AUSTRÁLIA~CULINÁRIA-----\n");
                printf("%lf colher de sopa |%lf colher de sobremesa |%lf colher de chá |\n", ce, cf, cg);

                printf("----------CULINÁRIA----------\n");
                printf("%lf xícara |%lf colher de sopa |%lf colher de chá |\n", ch, ci, cj);

                printf("------UNIDADES NATURAIS------\n");
                printf("%lf L³ |\n", ck);

                printf("----------ASTRONOMIA----------\n");
                printf("%lf pc³ |%lf ano-luz cúbico |%lf minuto-luz cúbico |%lf segundo-luz cúbico |\n", cl, cm, cn, co);

                printf("------------NAVAL------------\n");
                printf("%lf arqueação |%lf tonelada de registro |%lf Sistema de Medição Universal do Canal do Panamá |\n", cp, cq, cr);

                printf("-----------MADEIRA-----------\n");
                printf("%lf milhão de board-feet (mmfbm, mmbdft, mmbf) |%lf corda |%lf mil board-feet (mfbm, mbdft, mbf) |%lf HT |%lf tonelada cúbica de madeira |%lf estere |%lf hoppus pé, hoppus ft³ (h ft) |%lf board-foot (fbmm, bdft, bf) |\n", cs, ct, cu, cv, cw, cx, cy, cz);

                printf("------------JAPÃO------------\n");
                printf("%lf sai |%lf shaku |%lf go |%lf sho |%lf to |%lf koku |\n", da, db, dc, dd, de, df);

                printf("-------CHINA 1915#1930-------\n");
                printf("%lf dan |%lf hu |%lf dou |%lf sheng |%lf ge |%lf shao |\n", dg, dh, di, dj, dk, dl);

                printf("-------CHINA 1930#HOJE-------\n");
                printf("%lf dan |%lf dou |%lf sheng |%lf ge |%lf shao |%lf cuo |\n", dm, dn, doo, dp, dq, dr);

                printf("----------TAILÂNDIA----------\n");
                printf("%lf kwian |%lf sat |%lf thang |%lf thanan |%lf fai mue |%lf kam mue |%lf yip mue |\n", ds, dt, du, dv, dw, dx, dy);

                printf("------GRÉCIA ÁTICO SECO------\n");
                printf("%lf medimnos |%lf hekteus |%lf hēmiekton |%lf choinix |%lf xestēs |%lf kotylē ou hēmina |%lf oxybathon |%lf kyathos |%lf kochliarion |\n", dz, ea, eb, ec, ed, ee, ef, eg, eh);

                printf("-----GRÉCIA ÁTICO LÍQUIDO-----\n");
                printf("%lf metrētēs |%lf keramion |%lf chous |%lf xestēs |%lf kotylē, tryblion ou hēmina |%lf tetarton, hēmikotylē |%lf oxybathon |%lf kyathos |%lf konchē |%lf mystron |%lf chēmē |%lf kochliarion |\n", ei, ej, ek, el, em, en, eo, ep, eq, er, es, et);

                printf("-------------ROMA-------------\n");
                printf("%lf culeus |%lf amphora quadrantal |%lf urna |%lf modius castrensis |%lf modius |%lf semimodius |%lf congius |%lf sextarius |%lf hemina |%lf cotyla |%lf triens |%lf quartarius |%lf sextans |%lf acetabulum |%lf cyathus |%lf ligula |\n", eu, ev, ew, ex, ey, ez, fa, fb, fc, fd, fe, ff, fg, fh, fi, fj);

                printf("-----ESPANHA ANTIGA SECO-----\n");
                printf("%lf cahíz |%lf fanega |%lf cuartilla |%lf celemín |%lf medio |%lf cuartillo |%lf ochavo |\n", fk, fl, fm, fn, fo, fp, fq);

                printf("----ESPANHA ANTIGA LÍQUIDO----\n");
                printf("%lf moyo |%lf cántara |%lf arroba |%lf azumbre |%lf botella |%lf cuartillo |%lf copa |%lf panilla |%lf cortadillo |\n", fr, fs, ft, fu, fv, fw, fx, fy, fz);

                printf("-----PORTUGAL ANTIGO SECO-----\n");
                printf("%lf moio |%lf fanga |%lf alqueire |%lf quarta |%lf oitava |%lf maquia |%lf selamim |%lf meio-selamim |%lf quarto de selamim |\n", ga, gb, gc, gd, ge, gf, gg, gh, gi);

                printf("---PORTUGAL ANTIGO LÍQUIDO---\n");
                printf("%lf tonel |%lf pipa |%lf almude |%lf cântaro |%lf pote |%lf canada |%lf quartilho |%lf meio-quartilho |%lf quarto de quartilho |\n", gj, gk, gl, gm, gn, go, gp, gq, gr);

                printf("--------FRANCÊS ANTIGO--------\n");
                printf("%lf minot |%lf litron |\n", gs, gt);

                printf("------RÚSSIA ANTIGA SECA------\n");
                printf("%lf cetverik |%lf vedro |%lf garnetz |\n", gu, gv, gw);

                printf("----RÚSSIA ANTIGA LÍQUIDA----\n");
                printf("%lf vedro |%lf shtoff |%lf chetvert |%lf garrafa de vinho |%lf garrafa de vodca |%lf charka |%lf shkalik |\n", gx, gy, gz, ha, hb, hc, hd);

                printf("---------BÍBLIA SECO---------\n");
                printf("%lf coro |%lf letec |%lf efa |%lf seá |%lf cabe |%lf log |%lf bezah |%lf kezayit |\n", he, hf, hg, hh, hi, hj, hk, hl);

                printf("--------BÍBLIA LÍQUIDO--------\n");
                printf("%lf bato |%lf him |%lf log |\n", hm, hn, ho);

                printf("A CATEC agradece a sua consulta!\n");
                break;
            }
            case 3: {
                double n1;
                printf("Digite um valor em km: ");
                scanf("%lf", &n1);
                double a = n1;
                double b = n1 * 10;
                double c = n1 * 100;
                double d = n1 * 1000;
                double e = n1 * 10000;
                double f = n1 * 100000;
                double g = n1 * 1000000;
                double h = n1 * 1000000000;
                double i = n1 * 1000000000000;
                double j = n1 * 10000000000000;

                double k = n1 / 10000 * 2071;
                double l = n1 / 10000 * 6214;
                double m = n1 / 10000 * 6214;
                double n = n1 / 1000 * 4971;
                double o = n1 / 100 * 2734;
                double p = n1 / 100 * 4971;
                double q = n1 / 10 * 1988;
                double r = n1 / 10 * 1988;
                double s = n1 / 10 * 1988;
                double t = n1 * 1094;
                double u = n1 * 3281;
                double v = n1 * 4374;
                double w = n1 * 9843;
                double x = n1 * 39370;
                double y = n1 * 472441;
                double z = n1 * 39370079;
                double aa = n1 * 39370078740;

                double ab = n1 / 10000 * 2071;
                double ac = n1 / 10000 * 6214;
                double ad = n1 / 10000 * 6214;
                double ae = n1 / 1000 * 9113;
                double af = n1 / 100 * 2734;
                double ag = n1 / 100 * 3645;
                double ah = n1 / 1000 * 4971;
                double ai = n1 / 100 * 4971;
                double aj = n1 * 164;
                double ak = n1 / 10 * 1988;
                double al = n1 / 10 * 7291;
                double au = n1 / 10 * 8749;
                double av = n1 * 1094;
                double aw = n1 * 1312;
                double ax = n1 * 2187;
                double ay = n1 * 3281;
                double az = n1 * 4374;
                double ba = n1 * 4374;
                double bb = n1 * 6562;
                double bc = n1 * 9843;
                double bd = n1 * 13123;
                double be = n1 * 39370;
                double bf = n1 * 44994;
                double bg = n1 * 52494;
                double bh = n1 * 118110;
                double bi = n1 * 472441;
                double bj = n1 * 472441;
                double bk = n1 * 472441;
                double bl = n1 * 3937015;
                double bm = n1 * 39370147;
                double bn = n1 * 39370147;

                double bo = n1 / 1000 * 4971;
                double bp = n1 / 100 * 3281;
                double bq = n1 / 100 * 4971;
                double br = n1 / 100 * 9942;
                double bs = n1 / 10 * 1988;
                double bt = n1 * 1094;
                double bu = n1 * 3281;
                double bv = n1 * 4971;
                double bw = n1 * 4971;
                double bx = n1 * 3281;

                double by = n1 / 100 * 18;
                double bz = n1 / 100 * 54;
                double ca = n1 / 10 * 54;
                double cb = n1 / 10 * 5468;

                double cc = n1 / 10000 * 5396;
                double cd = n1 / 1000 * 4557;
                double ce = n1 / 10 * 5468;

                double cf = n1 / 10000 * 5396;
                double cg = n1 / 1000 * 5396;

                double ch = n1 / 1000 * 7698;
                double ci = n1 * 10;
                double cj = n1 / 1000 * 7975;
                double ck = n1 / 10 * 125;
                double cl = n1 / 10 * 119;
                double cm = n1 / 10 * 119;
                double cn = n1 / 100 * 1154;
                double co = n1 / 100 * 1164;
                double cp = n1 * 1155;
                double cq = n1 / 10 * 9091;
                double cr = n1 * 1196;
                double cs = n1 * 1250;
                double ct = n1 * 1196;
                double cu = n1 * 1179;
                double cv = n1 * 1196;
                double cw = n1 * 1190;
                double cx = n1 * 1193;
                double cy = n1 * 1190;
                double cz = n1 * 1198;
                double da = n1 * 1193;
                double db = n1 * 1190;
                double dc = n1 * 1250;
                double dd = n1 * 1151;
                double de = n1 * 1193;
                double df = n1 * 1196;
                double dg = n1 * 1164;
                double dh = n1 * 1190;
                double di = n1 * 1196;

                double dj = n1 / 10000 * 2546;
                double dk = n1 / 1000 * 9167;
                double dl = n1 * 330;
                double dm = n1 * 550;
                double dn = n1 * 550;
                double doo = n1 * 3300;
                double dp = n1 * 33000;
                double dq = n1 * 330000;
                double dr = n1 * 3300000;
                double ds = n1 * 33000000;

                double dt = n1 / 10 * 1736;
                double du = n1 / 100 * 3125;
                double dv = n1 / 10 * 3125;
                double dw = n1 * 625;
                double dx = n1 * 3125;
                double dy = n1 * 31250;
                double dz = n1 * 312500;
                double ea = n1 * 3125000;
                double eb = n1 * 31250000;
                double ec = n1 * 312500000;
                double ed = n1 * 3125000000;

                double ee = n1 * 2;
                double ef = n1 * 30;
                double eg = n1 * 300;
                double eh = n1 * 3000;
                double ei = n1 * 30000;
                double ej = n1 * 300000;
                double ek = n1 * 3000000;
                double el = n1 * 30000000;
                double em = n1 * 300000000;
                double en = n1 * 3000000000;
                double eo = n1 * 3000000;

                double ep = n1 * 2692;
                double eq = n1 * 26920;
                double er = n1 * 269197;

                double es = n1 / 10000 * 625;
                double et = n1 * 25;
                double eu = n1 * 500;
                double ev = n1 * 2000;
                double ew = n1 * 4000;
                double ex = n1 * 48000;
                double ey = n1 * 192000;

                double ez = n1 / 1000;

                double fa = n1 / 10000 * 1348;

                double fb = n1 * 22497;
                double fc = n1 * 196850;

                double fd = n1 * 236220;
                double fe = n1 * 236220;
                double ff = n1 * 2834646;
                double fg = n1 * 2834646;
                double fh = n1 * 3779528;
                double fi = n1 * 56692913;

                double fj = n1 * 221648;
                double fk = n1 * 2659776;

                double fl = n1 * 150000;

                double fm = n1 / 1e27 * 7676;
                double fn = n1 / 100000000000000000 * 3241;
                double fo = n1 / 10000000000000000 * 1057;
                double fp = n1 / 1000000000000 * 6685;
                double fq = n1 / 100000000000 * 5559;
                double fr = n1 / 1000000000 * 3336;

                double fs = n1 * 3336;
                double ft = n1 * 3336;
                double fu = n1 * 3335641;

                double fv = n1 / 1e40 * 6187;

                double fw = n1 / 100000 * 9524;
                double fx = n1 / 100 * 1905;
                double fy = n1 * 1778;
                double fz = n1 * 1905;
                double ga = n1 * 2222;
                double gb = n1 * 2667;
                double gc = n1 * 3333;
                double gd = n1 * 3810;
                double ge = n1 * 4444;
                double gf = n1 * 8889;
                double gg = n1 * 10667;
                double gh = n1 * 13333;
                double gi = n1 * 53333;

                double gj = n1 / 10000 * 1349;
                double gk = n1 / 10000 * 1799;
                double gl = n1 / 10000 * 4498;
                double gm = n1 / 10000 * 6747;
                double gn = n1 / 1000 * 1349;
                double go = n1 / 1000 * 2699;
                double gp = n1 / 1000 * 5397;
                double gq = n1 / 1000 * 5201;
                double gr = n1 / 1000 * 5406;
                double gs = n1 / 1000 * 5405;
                double gt = n1 / 100 * 3238;
                double gu = n1 / 100 * 5397;
                double gv = n1 / 10 * 3238;
                double gw = n1 / 10 * 3238;
                double gx = n1 / 10 * 3238;
                double gy = n1 / 10 * 5397;
                double gz = n1 / 10 * 6477;
                double ha = n1 * 1295;
                double hb = n1 * 2159;
                double hc = n1 * 2591;
                double hd = n1 * 2879;
                double he = n1 * 3238;
                double hf = n1 * 4318;
                double hg = n1 * 4710;
                double hh = n1 * 5181;
                double hi = n1 * 6477;
                double hj = n1 * 6477;
                double hk = n1 * 12953;
                double hl = n1 * 12953;
                double hm = n1 * 25907;
                double hn = n1 * 51813;

                double ho = n1 / 10000 * 1689;
                double hp = n1 / 10000 * 4505;
                double hq = n1 / 10000 * 6757;
                double hr = n1 / 1000 * 5405;
                double hs = n1 / 100 * 2815;
                double ht = n1 / 10 * 3378;
                double hu = n1 / 10 * 3378;
                double hv = n1 / 10 * 6757;
                double hw = n1 * 1351;
                double hx = n1 * 1351;
                double hy = n1 * 2252;
                double hz = n1 * 2703;
                double ia = n1 * 3378;
                double ib = n1 * 4505;
                double ic = n1 * 13514;
                double id = n1 * 40541;
                double ie = n1 * 40541;
                double ig = n1 * 54054;

                double ih = n1 / 10000 * 1495;
                double ii = n1 / 10000 * 1794;
                double ij = n1 / 10000 * 2393;
                double ik = n1 / 10000 * 5383;
                double il = n1 / 10000 * 7178;
                double im = n1 / 100 * 2991;
                double io = n1 * 145;
                double ip = n1 / 10 * 2991;
                double iq = n1 / 10 * 2991 * 2;
                double ir = n1 / 10 * 7178;
                double it = n1 * 1196;
                double iu = n1 * 1794;
                double iv = n1 * 2393;
                double iw = n1 * 3589;
                double ix = n1 * 4785;
                double iy = n1 * 9570;
                double iz = n1 * 43067;
                double ja = n1 * 516805;
                double jb = n1 * 6201662;

                double jc = n1 / 10 * 4545;
                double jd = n1 / 10 * 7576;
                double je = n1 / 10 * 6061;
                double jf = n1 / 10 * 9091;
                double jg = n1 * 1515;
                double jh = n1 * 1515 * 2;
                double ji = n1 * 1515 * 3;
                double jj = n1 * 36364;
                double jk = n1 * 436364;
                double jl = n1 * 5236364;

                double jm = n1 / 10000 * 2246;
                double jn = n1 / 10000 * 2252;
                double jo = n1 / 10000 * 2565;
                double jp = n1 / 100 * 25;
                double jq = n1 / 10 * 171;
                double jr = n1 * 171;
                double js = n1 / 10 * 5131;
                double jt = n1 * 3078;
                double ju = n1 * 36941;
                double jv = n1 * 443295;

                double jw = n1 / 10000 * 1339;
                double jx = n1 / 10000 * 9374;
                double jy = n1 / 10000 * 4687;
                double jz = n1 / 10 * 4032;
                double ka = n1 / 10 * 4687;
                double kb = n1 / 10 * 5682;
                double kc = n1 * 1406;
                double kd = n1 * 2381;
                double ke = n1 * 3281;
                double kf = n1 * 5624;
                double kg = n1 * 22497;
                double kh = n1 * 39370;
                double ki = n1 * 393701;

                double kj = n1 / 10000 * 1328;
                double kk = n1 / 10 * 2655;
                double kl = n1 * 1499;
                double km = n1 * 3186;
                double kn = n1 * 38233;
                double ko = n1 * 458793;

                double kp = n1 / 10000 * 1318;
                double kq = n1 / 10 * 2636;
                double kr = n1 / 10 * 5273;
                double ks = n1 * 3164;
                double kt = n1 * 37965;
                double ku = n1 * 455581;
                double kv = n1 * 5466970;

                double kw = n1 / 10;
                double kx = n1 / 100000 * 9356;
                double ky = n1 / 10000 * 3742;
                double kz = n1 / 100 * 2105;
                double la = n1 / 100 * 3368;
                double lb = n1 / 10 * 2105;
                double lc = n1 / 10 * 5614;
                double ld = n1 * 1684;
                double le = n1 * 3368;
                double lf = n1 * 6736;
                double lg = n1 * 10104;
                double lh = n1 * 40418;
                double li = n1 * 33681;
                double lj = n1 * 485012;
                double lk = n1 * 404176;

                double ll = n1 * 2187;
                double lm = n1 * 4374;
                double ln = n1 * 13123;
                double lo = n1 * 52493;

                printf("-------MEDIDAS MÉTRICAS-------\n");
                printf("%lf km |%lf hm |%lf dam |%lf m |%lf dm |%lf cm |%lf mm |%lf mícron |%lf nm |%lf Å|\n", a, b, c, d, e, f, g, h, i, j);
                
                printf("-------EUA E INGLATERRA-------\n");
                printf("%lf légua |%lf mi |%lf land |%lf furlong |%lf bolt |%lf chain |%lf pole |%lf rd |%lf perch |%lf yd |%lf ft |%lf palmo |%lf hand |%lf in |%lf linha |%lf mil |%lf micropolegada |\n", k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, aa);
                
                printf("----------INGLATERRA----------\n");
                printf("%lf légua |%lf mi |%lf land |%lf skein |%lf bolt |%lf shackle |%lf furlong |%lf corrente |%lf rope |%lf pole |%lf goad |%lf ell |%lf yd |%lf ritmo |%lf côvado |%lf ft |%lf palmo |%lf nail |%lf shaftment |%lf hd |%lf plm |%lf in |%lf finger |%lf digitus |%lf grãos de cevada |%lf sementes de papoula |%lf linha |%lf botão |%lf calibre |%lf thou |%lf mil |\n", ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, au, av, aw, ax, ay, az, ba, bb, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, bm, bn);
                
                printf("-----AGRIMENSURA DOS EUA-----\n");
                printf("%lf furlong |%lf corrente de ramsden - engenharia |%lf corrente de gunter - agrimensor |%lf corrente de gurley |%lf pole de gunter |%lf yard de gunter |%lf link de ramsden |%lf link de gunter |%lf link de gurley |%lf pé de gunter |\n", bo, bp, bq, br, bs, bt, bu, bv, bw, bx);
                
                printf("-----------NÁUTICA-----------\n");
                printf("%lf naut.leg |%lf naut.mi |%lf cbl |%lf fath |\n", by, bz, ca, cb);
                
                printf("---------NÁUTICA EUA---------\n");
                printf("%lf milha marítima norte-americana |%lf cabo norte-americano |%lf fath |\n", cc, cd, ce);
                
                printf("------NÁUTICA INGLATERRA------\n");
                printf("%lf mira do almirantado |%lf cabo do almirantado |\n", cf, cg);
                
                printf("-----------ESPANHA-----------\n");
                printf("%lf cuadra da Argentina |%lf cuadra da Bolívia |%lf cuadra do Chile |%lf cuadra da Colômbia |%lf cuadra do Equador |%lf cuadra da Nicarágua |%lf cuadra do Paraguai |%lf cuadra do Uruguai |%lf vara da Argentina |%lf vara do Brasil |%lf vara do Chile |%lf vara da Colômbia |%lf vara da Costa Rica |%lf vara de Cuba |%lf vara da República Dominicana |%lf vara do Equador |%lf vara de El Salvador |%lf vara da Guatemala |%lf vara de Honduras |%lf vara do México |%lf vara da Nicarágua |%lf vara do Panamá |%lf vara do Paraguai |%lf vara do Peru - peruano |%lf vara do Peru - espanhol |%lf vara do Uruguai |%lf vara de São Tomé e Príncipe |%lf vara da Venezuela |\n", ch, ci, cj, ck, cl, cm, cn, co, cp, cq, cr, cs, ct, cu, cv, cw, cx, cy, cz, da, db, dc, dd, de, df, dg, dh, di);
                
                printf("------------JAPÃO------------\n");
                printf("%lf ri |%lf cho |%lf jo |%lf hiro |%lf ken |%lf shaku |%lf sun |%lf bu |%lf rin |%lf mo |\n", dj, dk, dl, dm, dn, doo, dp, dq, dr, ds);
                
                printf("-------CHINA 1915#1930-------\n");
                printf("%lf li - ⾥ |%lf yin |%lf zhang |%lf bu |%lf chi |%lf cun |%lf fen |%lf li - 㢆 ou 釐 |%lf hao |%lf si |%lf hu |\n", dt, du, dv, dw, dx, dy, dz, ea, eb, ec, ed);
                
                printf("-------CHINA 1930#HOJE-------\n");
                printf("%lf li - ⾥ |%lf yin |%lf zhang |%lf chi |%lf cun |%lf fen |%lf li - 㢆 |%lf hao |%lf si |%lf hu |%lf li - 釐 |\n", ee, ef, eg, eh, ei, ej, ek, el, em, en, eo);
                
                printf("----------HONG KONG----------\n");
                printf("%lf cek |%lf tsun |%lf fan |\n", ep, eq, er);
                
                printf("----------TAILÂNDIA----------\n");
                printf("%lf yot |%lf sen |%lf wa |%lf sok |%lf khuep |%lf nio |%lf krabiat |\n", es, et, eu, ev, ew, ex, ey);
                
                printf("------------ÓPTICA------------\n");
                printf("%lf dioptria |\n", ez);
                
                printf("-------GEOGRAFIA ALEMÃ-------\n");
                printf("%lf milha geográfica |\n", fa);
                
                printf("----------COMPUTAÇÃO----------\n");
                printf("%lf U |%lf HP |\n", fb, fc);
                
                printf("-------------ATA-------------\n");
                printf("%lf paica |%lf paica - PostScript |%lf ponto |%lf ponto - PostScript |%lf px |%lf twip |\n", fd, fe, ff, fg, fh, fi);
                
                printf("------------DIDOT------------\n");
                printf("%lf cícero |%lf ponto |\n", fj, fk);
                
                printf("-------CALÇADO EUROPEU-------\n");
                printf("%lf ponto parisiense |\n", fl);
                
                printf("----------ASTRONOMIA----------\n");
                printf("%lf z |%lf pc |%lf ano-luz |%lf au |%lf minuto-luz |%lf segundo-luz |\n", fm, fn, fo, fp, fq, fr);
                
                printf("---------GRACE HOPPER---------\n");
                printf("%lf microssegundo-luz |%lf nanossegundo-luz |%lf picossegundo-luz |\n", fs, ft, fu);
                
                printf("-----------NATURAIS-----------\n");
                printf("%lf L |\n", fv);
                
                printf("------------EGITO------------\n");
                printf("%lf iteru |%lf knet |%lf nbiw |%lf meh niswt |%lf meh nedjes |%lf remen |%lf djeser |%lf pedj-aa |%lf pedj-sheser |%lf amem |%lf deret |%lf shesep |%lf djeba |\n", fw, fx, fy, fz, ga, gb, gc, gd, ge, gf, gg, gh, gi);
                
                printf("------------GRÉCIA------------\n");
                printf("%lf schoinos |%lf parasanges |%lf dolichos |%lf mílion |%lf hippikon |%lf diaulos |%lf stadion |%lf estádio olímpico |%lf estádio ático |%lf estádio ptolemaico |%lf plethron |%lf hamma |%lf dekapous |%lf akaina |%lf kalamos |%lf orgyia |%lf diploun bēma |%lf haploun bēma |%lf pēchys |%lf pygōn |%lf pygmē |%lf pous |%lf spithamē |%lf orthodōron |%lf lichas |%lf hemipodion |%lf dichas |%lf dōron |%lf palaiste |%lf kondylos |%lf daktylos |\n", gj, gk, gl, gm, gn, go, gp, gq, gr, gs, gt, gu, gv, gw, gx, gy, gz, ha, hb, hc, hd, he, hf, hg, hh, hi, hj, hk, hl, hm, hn);
                
                printf("-------------ROMA-------------\n");
                printf("%lf schœnus |%lf leuga |%lf mille passus |%lf stadium |%lf actus |%lf decempada |%lf pertica |%lf passus |%lf pes sestertius |%lf gradus |%lf cubitus |%lf palmipes |%lf pes |%lf palmus major |%lf palmus |%lf uncia |%lf pollex |%lf digitus |\n", ho, hp, hq, hr, hs, ht, hu, hv, hw, hx, hy, hz, ia, ib, ic, id, ie, ig);
                
                printf("--------ESPANHA ANTIGA--------\n");
                printf("%lf legua de por grado |%lf legua marina |%lf legua |%lf milla marina |%lf milla |%lf cuerda de Valencia |%lf cuerda |%lf estadal |%lf braza |%lf paso |%lf vara |%lf codo de ribera |%lf codo |%lf pie |%lf palmo |%lf coto |%lf pulgada |%lf linea |%lf punto |\n", ih, ii, ij, ik, il, im, io, ip, iq, ir, it, iu, iv, iw, ix, iy, iz, ja, jb);
                
                printf("-------PORTUGAL ANTIGO-------\n");
                printf("%lf braça |%lf toesa |%lf passo geométrico |%lf vara |%lf côvado |%lf pé |%lf palmo de craveira |%lf polegada |%lf linha |%lf ponto |\n", jc, jd, je, jf, jg, jh, ji, jj, jk, jl);
                
                printf("--------FRANCÊS ANTIGO--------\n");
                printf("%lf lieue commune |%lf lieue marine |%lf lieue de post |%lf lieue metrique |%lf arpent |%lf perche |%lf toise |%lf pied |%lf pouce |%lf ligne |\n", jm, jn, jo, jp, jq, jr, js, jt, ju, jv);
                
                printf("--------RÚSSIA ANTIGA--------\n");
                printf("%lf milha |%lf verst |%lf mezhevaya verst |%lf kosaya sazhen |%lf sazhen |%lf makhovaya sazhen |%lf arshin |%lf lokot |%lf pé |%lf pyad |%lf vershok |%lf polegada |%lf linha |\n", jw, jx, jy, jz, ka, kb, kc, kd, ke, kf, kg, kh, ki);
                
                printf("-----------PRÚSSIA-----------\n");
                printf("%lf meile |%lf ruthe |%lf elle |%lf fuss |%lf zoll |%lf linie |\n", kj, kk, kl, km, kn, ko);
                
                printf("--------ÁUSTRIA ANTIGA--------\n");
                printf("%lf meile |%lf ruthe |%lf klafner |%lf fuss |%lf zoll |%lf linie |%lf punkt |\n", kp, kq, kr, ks, kt, ku, kv);
                
                printf("--------SUÉCIA ANTIGA--------\n");
                printf("%lf nymil |%lf milha |%lf fjärdingsväg |%lf rev anterior a 1855 |%lf rev posterior a 1855 |%lf stång |%lf famn |%lf aln |%lf fot |%lf kvarter |%lf tvärhand |%lf tum anterior a 1855 |%lf tum posterior a 1855 |%lf linje anterior a 1855 |%lf linje posterior a 1855 |\n", kw, kx, ky, kz, la, lb, lc, ld, le, lf, lg, lh, li, lj, lk);
                
                printf("------------BÍBLIA------------\n");
                printf("%lf côvado |%lf palmo |%lf tephach |%lf etzbah |\n", ll, lm, ln, lo);

                printf("A CATEC agradece a sua consulta!\n");
                break;
            }
            case 4: {
                double n1;
                printf("Digite um valor em kg: ");
                scanf("%lf", &n1);
                double a = n1 / 1000000;
                double b = n1 / 1000;
                double c = n1;
                double d = n1 * 1000;
                double e = n1 * 100000;
                double f = n1 * 1000000;
                double g = n1 * 1000000000;
                double h = n1 / 1000 * 9807;
                double i = n1 / 1000000 * 9807;
                double j = n1 * 5000;
                double k = n1 / 100;
                double l = n1 / 100;
                double m = n1 * 602214129011674 * 1000000000000;
                double n = n1 / 100000 * 6808;
                double o = n1 / 100000 * 1261;
                double p = n1 / 100000 * 6808 / 4;
                double q = n1 / 100000 * 6808 * 32;
                double r = n1 / 100000 * 6808 * 128;
                double s = n1 / 100000 * 6808 * 512;
                double t = n1 / 100000 * 6808 * 4096;
                double u = n1 / 100000 * 6808 * 12288;
                double v = n1 / 100000 * 6808 * 294912;
                double w = n1 / 1000000 * 3623;
                double x = n1 / 100000 * 3212;
                double y = n1 / 100000 * 2415;
                double z = n1 / 100000 * 3105;
                double aa = n1 / 100000 * 3623;
                double ab = n1 / 10000 * 1449;
                double ac = n1 / 1000 * 2174;
                double ad = n1 / 1000 * 2174 * 2;
                double ae = n1 / 1000 * 2174 * 4;
                double af = n1 / 1000 * 2174 * 16;
                double ag = n1 / 1000 * 2174 * 128;
                double ah = n1 / 1000 * 2174 * 256;
                double ai = n1 / 1000 * 2174 * 9216;
                double aj = n1 / 100000 * 2043;
                double ak = n1 / 1000 * 2043;
                double al = n1 / 1000000 * 6105;
                double au = n1 / 1000000 * 6105 * 10;
                double av = n1 / 1000000 * 6105 * 400;
                double aw = n1 / 1000000 * 6105 * 12800;
                double ax = n1 / 1000000 * 6105 * 38400;
                double ay = n1 / 1000000 * 6105 * 3686400;
                double az = n1 / 1000000 * 6479;
                double ba = n1 / 1000000 * 9719;
                double bb = n1 / 100000 * 1944;
                double bc = n1 / 100000 * 9719;
                double bd = n1 / 1000 * 2138;
                double be = n1 / 1000 * 2138 * 2;
                double bf = n1 / 100 * 3421;
                double bg = n1 / 100 * 3421 * 2;
                double bh = n1 / 10 * 2053;
                double bi = n1 / 10 * 2737;
                double bj = n1 * 1095;
                double bk = n1 * 16420;
                double bl = n1 / 1000000 * 4464;
                double bm = n1 / 1000000 * 6493;
                double bn = n1 / 100000 * 1786;
                double bo = n1 / 100000 * 8117;
                double bp = n1 / 1000 * 1786;
                double bq = n1 / 1000 * 1786 * 2;
                double br = n1 / 1000 * 1786 * 4;
                double bs = n1 / 1000 * 1786 * 16;
                double bt = n1 / 100 * 6842;
                double bu = n1 / 100 * 6842 * 4;
                double bv = n1 / 100 * 6842 * 16;
                double bw = n1 / 1000000 * 5881;
                double bx = n1 / 1000000 * 5881 * 20;
                double by = n1 / 1000 * 196;
                double bz = n1 / 1000000 * 5881 * 400;
                double ca = n1 / 1000000 * 5881 * 800;
                double cb = n1 / 1000000 * 5881 * 40000;
                double cc = n1 / 1000000 * 1102;
                double cd = n1 / 1000000 * 1102 * 2000;
                double ce = n1 / 1000000 * 1102 * 32000;
                double cf = n1 / 10 * 2746;
                double cg = n1 * 5217;
                double ch = n1 / 100000 * 2939;
                double ci = n1 / 100000 * 2939 * 60;
                double cj = n1 / 100000 * 2939 * 3000;
                double ck = n1 / 100000 * 2939 * 4500;
                double cl = n1 / 100000 * 2939 * 6000;
                double cm = n1 / 100000 * 2939 * 60000;
                double cn = n1 / 100 * 3649 / 12;
                double co = n1 / 100 * 3649;
                double cp = n1 / 100 * 3649 * 2;
                double cq = n1 / 100 * 3649 * 3;
                double cr = n1 / 100 * 3649 * 4;
                double cs = n1 / 100 * 3649 * 6;
                double ct = n1 / 100 * 3649 * 8;
                double cu = n1 / 100 * 3649 * 12;
                double cv = n1 / 100 * 3649 * 24;
                double cw = n1 / 100 * 3649 * 48;
                double cx = n1 / 100 * 3649 * 144;
                double cy = n1 / 1000 * 3317;
                double cz = n1 / 1000 * 3649;
                double da = n1 / 1000 * 4054;
                double db = n1 / 1000 * 4561;
                double dc = n1 / 1000 * 5212;
                double dd = n1 / 100 * 3649 / 6;
                double de = n1 / 1000 * 7297;
                double df = n1 / 100 * 3649 / 4;
                double dg = n1 / 100 * 3649 / 3;
                double dh = n1 / 100 * 3649 / 3;
                double di = n1 / 100 * 3649 / 2;
                double dj = n1 / 100 * 2432;
                double dk = n1 / 100000 * 2646;
                double dl = n1 / 100000 * 2646 * 60;
                double dm = n1 / 100000 * 2646 * 600;
                double dn = n1 / 100000 * 2646 * 1500;
                double doo = n1 / 100000 * 2646 * 3000;
                double dp = n1 / 100000 * 2646 * 3000;
                double dq = n1 / 100000 * 2646 * 6000;
                double dr = n1 / 100000 * 2646 * 9000;
                double ds = n1 / 100000 * 2646 * 12000;
                double dt = n1 / 100000 * 2646 * 18000;
                double du = n1 / 100000 * 2646 * 36000;
                double dv = n1 / 100000 * 2646 * 48000;
                double dw = n1 / 100000 * 2646 * 72000;
                double dx = n1 / 100000 * 2646 * 24000;
                double dy = n1 / 100000 * 2646 * 144000;
                double dz = n1 / 100000 * 2646 * 288000;
                double ea = n1 / 100000 * 3858;
                double eb = n1 / 100000 * 3858 * 60;
                double ec = n1 / 100000 * 3858 * 600;
                double ed = n1 / 100000 * 3858 * 1500;
                double ee = n1 / 100000 * 3858 * 3000;
                double ef = n1 / 100000 * 3858 * 3000;
                double eg = n1 / 100000 * 3858 * 6000;
                double eh = n1 / 100000 * 3858 * 9000;
                double ei = n1 / 100000 * 3858 * 12000;
                double ej = n1 / 100000 * 3858 * 18000;
                double ek = n1 / 100000 * 3858 * 36000;
                double el = n1 / 100000 * 3858 * 48000;
                double em = n1 / 100000 * 3858 * 72000;
                double en = n1 / 100000 * 3858 * 24000;
                double eo = n1 / 100000 * 3858 * 144000;
                double ep = n1 / 100000 * 3858 * 288000;
                double eq = n1 * 45945087;
                double er = n1 / 100000 * 1667;
                double es = n1 / 100000 * 1667 * 50;
                double et = n1 / 100000 * 1667 * 1000;
                double eu = n1 / 100000 * 1667 * 4000;
                double ev = n1 / 100 * 6596;
                double ew = n1 / 100000 * 1667 * 8000;
                double ex = n1 / 100000 * 1667 * 16000;
                double ey = n1 / 100000 * 1667 * 32000;
                double ez = n1 / 100000 * 1667 * 64000;
                double fa = n1 / 100000 * 1667 * 128000;
                double fb = n1 / 100000 * 1667 * 256000;
                double fc = n1 / 100000 * 1667 * 512000;
                double fd = n1 / 100000 * 1667 * 25600000;
                double fe = n1 / 100000 * 134;
                double ff = n1 / 100000 * 134 * 20;
                double fg = n1 / 100000 * 134 * 160;
                double fh = n1 / 100000 * 134 * 640;
                double fi = n1 / 100000 * 134 * 800;
                double fj = n1 / 100000 * 134 * 3200;
                double fk = n1 / 100000 * 134 * 12800;
                double fl = n1 / 100000 * 134 * 2400;
                double fm = n1 / 100000 * 134 * 57600;
                double fn = n1 / 100000 * 134 * 64000;
                double fo = n1 / 100000 * 134 * 768000;
                double fp = n1 / 100000 * 134 * 6144000;
                double fq = n1 / 10000 * 2667;
                double fr = n1 / 1000 * 1667;
                double fs = n1 / 10000 * 2667 * 10;
                double ft = n1 / 10000 * 2667 * 1000;
                double fu = n1 / 10000 * 2667 * 10000;
                double fv = n1 / 100000 * 1653;
                double fw = n1 / 1000 * 1653;
                double fx = n1 / 100 * 2646;
                double fy = n1 / 10 * 2646;
                double fz = n1 * 2646;
                double ga = n1 / 100 * 2672;
                double gb = n1 / 10 * 2672;
                double gc = n1 * 2672;
                double gd = n1 / 1000 * 1676;
                double ge = n1 / 1000 * 1676 * 16;
                double gf = n1 / 1000 * 1676 * 160;
                double gg = n1 / 1000 * 1676 * 1600;
                double gh = n1 / 1000 * 1676 * 16000;
                double gi = n1 / 1000 * 1676 * 160000;
                double gj = n1 / 100 * 2;
                double gk = n1 * 2;
                double gl = n1 * 32;
                double gm = n1 * 320;
                double gn = n1 * 3200;
                double go = n1 * 32000;
                double gp = n1 * 320000;
                double gq = n1 * 3200000;
                double gr = n1 / 100 * 2;
                double gs = n1 * 2;
                double gt = n1 * 20;
                double gu = n1 * 200;
                double gv = n1 * 2000;
                double gw = n1 * 20000;
                double gx = n1 * 200000;
                double gy = n1 * 2000000;
                double gz = n1 * 20000000;
                double ha = n1 / 10000000 * 9842;
                double hb = n1 / 1000000 * 1102;
                double hc = n1 / 1000000 * 2205;
                double hd = n1 / 100000 * 1968;
                double he = n1 / 100000 * 1968;
                double hf = n1 / 100000 * 2205;
                double hg = n1 / 10000 * 1575;
                double hh = n1 / 1000 * 2205;
                double hi = n1 / 100 * 3527;
                double hj = n1 / 10 * 5644;
                double hk = n1 * 15432;
                double hl = n1 / 1000 * 2679;
                double hm = n1 / 100 * 3215;
                double hn = n1 * 643;
                double ho = n1 * 4878;
                double hp = n1 * 15432;
                double hq = n1 * 308647;
                double hr = n1 * 7407532;
                double hs = n1 / 1000 * 2679;
                double ht = n1 / 100 * 3215;
                double hu = n1 / 10 * 2572;
                double hv = n1 / 10 * 7716;
                double hw = n1 * 15432;

                printf("------------COMUM------------\n");
                printf("%lf kT |%lf T |%lf kg |%lf g |%lf cg |%lf mg |%lf mcg |%lf N |%lf kN |%lf ct |%lf centner métrico |%lf quintal métrico |%lf amu |%lf M|\n", a, b, c, d, e, f, g, h, i, j, k, l, m, eq);

                printf("---------APOTHECARIES---------\n");
                printf("%lf lb |%lf onça |%lf dracma |%lf escrópulo |%lf grão|\n", hs, ht, hu, hv, hw);

                printf("-------------TROY-------------\n");
                printf("%lf lb |%lf ozt |%lf dwt |%lf ct |%lf grão |%lf mite |%lf doite|\n", hl, hm, hn, ho, hp, hq, hr);

                printf("---------AVOIRDUPOIS---------\n");
                printf("%lf T longa INGLATERRA |%lf T curta EUA |%lf klb Massa |%lf quintal longo REINO UNIDO |%lf centner britânico |%lf quintal curto EUA |%lf st |%lf lb |%lf oz |%lf dr |%lf gr|\n", ha, hb, hc, hd, he, hf, hg, hh, hi, hj, hk);

                printf("-----------PORTUGAL-----------\n");
                printf("%lf @ |%lf T |%lf quintal |%lf arrátel |%lf quarta |%lf onça |%lf oitava |%lf escrópulo |%lf grão |\n", n, o, p, q, r, s, t, u, v);

                printf("-----------ESPANHA-----------\n");
                printf("%lf T |%lf alqueire de trigo |%lf alqueire de centeio |%lf alqueire de cevada |%lf quintal |%lf @ |%lf £ |%lf marco |%lf cuarterón |%lf onça |%lf oitava |%lf adame |%lf grão |\n", w, x, y, z, aa, ab, ac, ad, ae, af, ag, ah, ai);

                printf("------------FRANÇA------------\n");
                printf("%lf quintal |%lf £ |\n", aj, ak);

                printf("------------RÚSSIA------------\n");
                printf("%lf berkovets |%lf pud |%lf £ |%lf lot |%lf zolotnik |%lf dolya |\n", al, au, av, aw, ax, ay);

                printf("-----------PRÚSSIA-----------\n");
                printf("%lf schiffspfund |%lf doppelzentner |%lf zentner |%lf stain |%lf pfund |%lf mark |%lf unze |%lf loth |%lf quentchen |%lf quint |%lf pfennig |%lf gran |\n", az, ba, bb, bc, bd, be, bf, bg, bh, bi, bj, bk);

                printf("-----------ÁUSTRIA-----------\n");
                printf("%lf kauch |%lf saum |%lf zentner |%lf stain |%lf pfund |%lf mark |%lf vierding |%lf unze |%lf loth |%lf quentchen |%lf denzt |\n", bl, bm, bn, bo, bp, bq, br, bs, bt, bu, bv);

                printf("------------SUÉCIA------------\n");
                printf("%lf skeppspund |%lf lispund |%lf bismerpund |%lf skålpund |%lf mark |%lf ort |\n", bw, bx, by, bz, ca, cb);

                printf("-------CHINA 1915#1930-------\n");
                printf("%lf jin |%lf liang |%lf qian |%lf fen |%lf li |%lf hao |\n", gd, ge, gf, gg, gh, gi);

                printf("-------CHINA 1930#1959-------\n");
                printf("%lf dan |%lf jin |%lf liang |%lf qian |%lf fen |%lf li |%lf hao |%lf si |\n", gj, gk, gl, gm, gn, go, gp, gq);

                printf("-------CHINA 1959#HOJE-------\n");
                printf("%lf dan |%lf jin |%lf liang |%lf qian |%lf fen |%lf li |%lf hao |%lf si |%lf hu |\n", gr, gs, gt, gu, gv, gw, gx, gy, gz);

                printf("-------------EUA-------------\n");
                printf("%lf T curta |%lf lb |%lf oz |\n", cc, cd, ce);

                printf("----------HONG KONG----------\n");
                printf("%lf picul |%lf catty |%lf tael |%lf mace |%lf candareen |%lf tael troy |%lf mace troy |%lf candareen troy |\n", fv, fw, fx, fy, fz, ga, gb, gc);

                printf("------------JAPÃO------------\n");
                printf("%lf kan |%lf kin |%lf nyakume |%lf monnme |%lf fun |\n", fq, fr, fs, ft, fu);

                printf("------------ÍNDIA------------\n");
                printf("%lf candy |%lf maund |%lf dhurra |%lf halk |%lf sèr |%lf powa |%lf chittak |%lf parah |%lf tank |%lf tolä |%lf māshā |%lf rattī |\n", fe, ff, fg, fh, fi, fj, fk, fl, fm, fn, fo, fp);

                printf("----------TAILÂNDIA----------\n");
                printf("%lf hap |%lf chang |%lf tamlueng |%lf baht |%lf baht ouro |%lf mayon |%lf salueng |%lf fueang |%lf seek |%lf siao |%lf ath |%lf solos |%lf bia |\n", er, es, et, eu, ev, ew, ex, ey, ez, fa, fb, fc, fd);

                printf("-------------ROMA-------------\n");
                printf("%lf £ |%lf onça |%lf semionça |%lf duella |%lf sicílico |%lf sextula |%lf dracma |%lf semisextula |%lf escrópulo |%lf óbolo |%lf síliqua |%lf deunx |%lf dextans |%lf dodrans |%lf bes |%lf septunx |%lf semisse |%lf quincunx |%lf triente |%lf quadrante |%lf terúncio |%lf sextante |%lf sescúncia |\n", cn, co, cp, cq, cr, cs, ct, cu, cv, cw, cx, cy, cz, da, db, dc, dd, de, df, dg, dh, di, dj);

                printf("-------GRÉCIA EGINÉTICO-------\n");
                printf("%lf talento |%lf mina |%lf decadracma |%lf tetradracma |%lf didracma |%lf estáter |%lf dracma |%lf tetróbolo |%lf trióbolo |%lf dióbolo |%lf óbolo |%lf tritartemorion |%lf hemióbolo |%lf trihemitetartemorion |%lf tetartemorion |%lf hemitetartemorion |\n", dk, dl, dm, dn, doo, dp, dq, dr, ds, dt, du, dv, dw, dx, dy, dz);

                printf("---------GRÉCIA ÁTICO---------\n");
                printf("%lf talento |%lf mina |%lf decadracma |%lf tetradracma |%lf didracma |%lf estáter |%lf dracma |%lf tetróbolo |%lf trióbolo |%lf dióbolo |%lf óbolo |%lf tritartemorion |%lf hemióbolo |%lf trihemitetartemorion |%lf tetartemorion |%lf hemitetartemorion |\n", ea, eb, ec, ed, ee, ef, eg, eh, ei, ej, ek, el, em, en, eo, ep);

                printf("----------FÉ BAHÁ´I----------\n");
                printf("%lf metical |%lf nakhud |\n", cf, cg);

                printf("------------BÍBLIA------------\n");
                printf("%lf talento |%lf mina |%lf siclo |%lf pim |%lf beca |%lf gera |\n", ch, ci, cj, ck, cl, cm);

                printf("A CATEC agradece a sua consulta!\n");
                break;
            }
            case 5: {
                double n1;
                printf("Digite um valor em ºC: ");
                scanf("%lf", &n1);
                double a = n1;
                double b = 32 + 9 / 5 * a;
                double c = 273.15 + a;
                double d = a * 0.8;
                double e = c / 1e36 * 7058;
                double f = 491.7 + a * 1.8;
                double g = a * 0.33;
                double h = 7.5 + a * 0.525;
                double i = 150 - a * 1.5;

                printf("------------ATUAL------------\n");
                printf("%lfºC |%lfºF |%lfK |%lfºRe |%lfΘ |\n", a, b, c, d, e);
                printf("-----------HISTÓRIA-----------\n");
                printf("%lfºR |%lfºN |%lfRø |%lfºD |\n", f, g, h, i);

                printf("A CATEC agradece a sua consulta!\n");
                break;
            }
            case 6: {
                double n1;
                printf("Digite um valor em km/h: ");
                scanf("%lf", &n1);
                double a = n1 / 10000000 * 2778;
                double b = n1 / 10000 * 2778;
                double c = n1 / 100000 * 1667;
                double d = n1 / 100 * 1667;
                double e = n1;
                double f = n1 * 1000;
                double g = n1 * 8766;
                double h = n1 * 8765813;
                double i = n1 / 10000000 * 1726;
                double j = n1 / 10000 * 9113;
                double k = n1 / 100 * 1094;
                double l = n1 / 100000 * 1036;
                double m = n1 / 100 * 5468;
                double n = n1 / 10 * 6562;
                double o = n1 / 10000 * 6214;
                double p = n1 * 3281;
                double q = n1 * 39370;
                double r = n1 * 5447;
                double s = n1 * 28759228;
                double t = n1 * 345110740;
                double u = n1 * 60 / e / e;
                double v = n1 * 3600 / e / e;
                double w = n1 * 360 / e / e;
                double x = n1 / 100 * 9656 / e / e;
                double y = n1 * 5794 / e / e;
                double z = n1 / 10 * 3292 / e / e;
                double aa = n1 * 1800 / e / e;
                double ab = n1 / 100 * 54;
                double ac = n1 / 100 * 54;
                double ad = n1 / 1000000 * 817;
                double ae = n1 / 1000000000000 * 926;

                printf("-------MEDIDAS MÉTRICAS-------\n");
                printf("%lf km/s |%lf m/s |%lf quilômetro por minuto |%lf metro por minuto |%lf km/h |%lf m/h |%lf quilômetro por ano |%lf metro por ano |\n", a, b, c, d, e, f, g, h);
                printf("-------EUA E INGLATERRA-------\n");
                printf("%lf milha por segundo |%lf pé por segundo |%lf polegada por segundo |%lf milha por minuto |%lf pé por minuto |%lf polegada por minuto |%lf mph |%lf pé por hora |%lf polegada por hora |%lf milha por ano |%lf pé por ano |%lf polegada por ano |\n", i, j, k, l, m, n, o, p, q, r, s, t);
                printf("------------RITMO------------\n");
                printf("%lf minutos por quilômetro |%lf segundos por quilômetro |%lf segundos por 100 metros |%lf minutos por milha |%lf segundos por milha |%lf segundos por 100 jardas |%lf segundos por 500 metros |\n", u, v, w, x, y, z, aa);
                printf("------UNIDADES NÁUTICAS------\n");
                printf("%lf nó |%lf milha marítima por hora |\n", ab, ac);
                printf("------------FÍSICA------------\n");
                printf("%lf velocidade do som no ar |%lf velocidade da luz no vácuo |\n", ad, ae);

                printf("A CATEC agradece a sua consulta!\n");
                break;
            }
            default:
                printf("Tivemos um problema com os tipos de dados que você digitou!\n");
        }
        printf("Você deseja realizar mais uma pesquisa? Digite [Sim] para realizar, caso contrário a nova pesquisa não será realizada\n> ");
        scanf("%s", repetir);
    }
    printf("A CATEC agradece a sua pesquisa!\n");
    return 0;
}
