#!/bin/bash
# Conversor de Unidades em Shell Script
# Autor: Exemplo
# Compatível com bash >= 4

# Mostrar tela de boas-vindas usando whiptail
whiptail --title "Conversor de Unidades - CATEC" --msgbox "Bienvenido." --fb 10 80

mostrar_menu() {
    echo "=============================="
    echo "   Conversor de Unidades"
    echo "=============================="
    echo "1) Área"
    echo "2) Capacidad"
    echo "3) Longitud"
    echo "4) Masa"
    echo "5) Temperatura"
    echo "6) Velocidad"
    echo "=============================="
}

repetir="Si"
while [ "$repetir" = "Si" ]; do
    mostrar_menu
    read -p "Por favor ingrese un número: " x

    case "$x" in
        1)
            read -p "Ingrese un valor en m²: " n1
            awk -v n1="$n1" 'BEGIN {
                a = n1
                b = n1 * 100
                c = n1 * 10000
                d = n1 * 1000000
                e = n1 * 10000000000000000000000000000
                f = n1 / 1000000
                g = n1 / 10000
                h = n1 / 1000
                i = n1 / 100

                j = n1 * 1073 / 100000000000
                k = n1 * 3861 / 10000000000
                l = n1 * 1544 / 1000000000
                m = n1 * 2471 / 10000000
                n = n1 * 9884 / 10000000
                o = n1 * 3954 / 100000
                p = n1 * 3954 / 100000
                q = n1 * 1196 / 1000
                r = n1 * 1076 / 100
                s = n1 * 1550
                t = n1 * 1550003100

                u = n1 * 3025 / 100
                v = n1 * 3025 / 1000
                w = n1 * 605 / 1000
                x = n1 * 3025 / 10000
                y = n1 * 3025 / 10000
                z = n1 * 1008 / 100000
                aa = n1 * 1008 / 1000000
                ab = n1 * 1008 / 10000000

                ac = n1 * 15 / 1000000
                ad = n1 * 15 / 10000
                ae = n1 * 15 / 1000
                af = n1 * 9 / 100
                ag = n1 * 15 / 100
                ah = n1 * 15 / 10
                ai = n1 * 9
                aj = n1 * 900

                ak = n1 * 1628 / 100000000
                al = n1 * 1628 / 1000000
                am = n1 * 1628 / 100000
                an = n1 * 9766 / 100000
                ao = n1 * 1628 / 10000
                ap = n1 * 1628 / 1000
                aq = n1 * 9766 / 1000
                ar = n1 * 9766 / 10

                ba = n1 * 625 / 1000000
                bb = n1 * 25 / 10000
                bc = n1 * 25 / 100

                bd = n1 * 1053 / 1000000
                be = n1 * 4211 / 1000000
                bf = n1 * 6316 / 1000000
                bg = n1 * 1263 / 100000
                bh = n1 * 2437 / 100000
                bi = n1 * 2924 / 100000
                bj = n1 * 1053 / 10000
                bk = n1 * 2924 / 10000
                bl = n1 * 4211 / 10000
                bm = n1 * 1053 / 100

                bn = n1 * 4249 / 10000000000
                bo = n1 * 17 / 10000000
                bp = n1 * 17 / 100000
                bq = n1 * 3399 / 10000000
                br = n1 * 6799 / 10000000
                bs = n1 * 272 / 100000
                bt = n1 * 2448 / 100000
                bu = n1 * 979 / 10000
                bv = n1 * 979 / 100
                bw = n1 * 114 / 10

                bx = n1 * 2925 / 10000000
                by = n1 * 2925 / 100000
                bz = n1 * 2632 / 10000
                ca = n1 * 9477 / 1000
                cb = n1 * 1365 / 1000

                cc = n1 * 5725 / 100000000000
                cd = n1 * 1431 / 1000000000
                ce = n1 * 2588 / 1000000000
                cf = n1 * 3106 / 1000000000
                cg = n1 * 1553 / 10000000
                ch = n1 * 2236 / 10000000
                ci = n1 * 2544 / 10000000
                cj = n1 * 1863 / 1000000
                ck = n1 * 7454 / 1000000
                cl = n1 * 8945 / 100000
                cm = n1 * 1431 / 1000
                cn = n1 * 1288 / 100

                co = n1 * 2066 / 10000
                cp = n1 * 8264 / 10000
                cq = n1 * 2066 / 100
                cr = n1 * 1322

                cs = n1 * 9153 / 100000000
                ct = n1 * 6865 / 100000000
                cu = n1 * 8787 / 10000000000
                cv = n1 * 1977 / 1000
                cw = n1 * 1176 / 100

                cx = n1 / 1000
                cy = n1 / 1000
                cz = n1 * 2446 / 1000000
                da = n1 / 1000
                db = n1 / 1000
                dc = n1 * 7874 / 10000000
                dd = n1 * 4 / 10000
                de = n1 / 1000
                df = n1 * 1088 / 1000000
                dg = n1 * 2381 / 10000000
                dh = n1 * 5714 / 1000000
                di = n1 / 10000
                dj = n1 * 1197 / 10000000
                dk = n1 * 1431 / 10000000
                dl = n1 * 1417 / 10000000
                dm = n1 * 1434 / 10000000
                dn = n1 * 1429 / 10000000
                do1 = n1 * 5928 / 100000000
                dp = n1 * 6359 / 100000000
                dq = n1 * 1417 / 10000000
                dr = n1 * 1333 / 10000000
                ds = n1 / 10000
                dt = n1 * 1355 / 10000000
                du = n1 * 1563 / 1000
                dv = n1 * 1417 / 1000
                dw = n1 * 1391 / 1000
                dx = n1 * 1336 / 1000
                dy = n1 * 8264 / 10000

                dz = n1 * 1974
                ea = n1 * 1973525
                eb = n1 * 1973525241

                ec = n1 / 1000000000000000000000000000000000000000000000000000000000000000000000000 * 3828

                print "------------------------------"
                print "-------TAMAÑOS MÉTRICOS-------"
                print "------------------------------"
                printf "%g m² |%g dm² |%g cm² |%g mm² |%g b |%g km² |%g hectárea |%g decare |%g a |\n", a, b, c, d, e, f, g, h, i

                print "------------------------------"
                print "-------EEUU Y INGLATERRA-------"
                print "------------------------------"
                printf "%g township |%g milha cuadrada |%g homestead |%g acre |%g rood |%g rod cuadrado |%g perch |%g yd² |%g ft² |%g in² |%g th² |\n", j, k, l, m, n, o, p, q, r, s, t

                print "-----------------------------"
                print "------------JAPÓN------------"
                print "-----------------------------"
                printf "%g shaku |%g go |%g jo |%g tsubo |%g bu |%g se |%g tan |%g cho |\n", u, v, w, x, y, z, aa, ab

                print "-----------------------------"
                print "-------CHINA 1915#1930-------"
                print "-----------------------------"
                printf "%g qing |%g mu |%g fen |%g fang zhang |%g li - 㢆 ou 釐 |%g hao |%g fang chi |%g fang cun |\n", ac, ad, ae, af, ag, ah, ai, aj

                print "-----------------------------"
                print "--------CHINA 1930#HOY--------"
                print "-----------------------------"
                printf "%g qing |%g mu |%g fen |%g fang zhang |%g li - 㢆 ou 釐 |%g hao |%g fang chi |%g fang cun |\n", ak, al, am, an, ao, ap, aq, ar

                print "-----------------------------"
                print "----------TAILANDIA----------"
                print "-----------------------------"
                printf "%g rai |%g ngan |%g tarang wah |\n", ba, bb, bc

                print "------------------------------"
                print "------------GRECIA------------"
                print "------------------------------"
                printf "%g plethron |%g aroura |%g hektos |%g hēmiektos |%g dodecaorgion |%g decaorgion |%g akaina |%g hexapodēs o orgya |%g bema o diploum |%g pous |\n", bd, be, bf, bg, bh, bi, bj, bk, bl, bm

                print "------------------------------"
                print "-------------ROMA-------------"
                print "------------------------------"
                printf "%g saltus |%g centurium |%g geredium |%g uger |%g akt cuadrado |%g klima |%g akt cuadrado pequeño |%g decimpeda cuadrada |%g ped cuadrado común |%g ped cuadrado legal |\n", bn, bo, bp, bq, br, bs, bt, bu, bv, bw

                print "------------------------------"
                print "--------FRANCÉS ANTIGUO--------"
                print "------------------------------"
                printf "%g arpent |%g perche |%g toise cuadrada |%g pied |%g pouce |\n", bx, by, bz, ca, cb

                print "------------------------------"
                print "--------ESPAÑA ANTIGUA--------"
                print "------------------------------"
                printf "%g legua |%g labor |%g caballería |%g yugada |%g fanegada |%g aranzada |%g cuerda de Puerto Rico |%g celemin |%g cuartillo |%g estadal cuadrado |%g vara cuadrada |%g pie cuadrado |\n", cc, cd, ce, cf, cg, ch, ci, cj, ck, cl, cm, cn

                print "-----------------------------"
                print "-------PORTUGAL ANTIGUO-------"
                print "-----------------------------"
                printf "%g braça cuadrada |%g vara cuadrada |%g palmo cuadrado |%g polegada cuadrada |\n", co, cp, cq, cr

                print "-----------------------------"
                print "--------RUSIA ANTIGUA--------"
                print "-----------------------------"
                printf "%g desyatina país |%g desyatina granjeros |%g verst cuadrado |%g arshin cuadrado |%g pie cuadrado |\n", cs, ct, cu, cv, cw

                print "------------------------------"
                print "----------AÚN EN USO----------"
                print "------------------------------"
                printf "%g dulum (дулум) de la Bosnia, Herzegovina e Serbia |%g dynym o dylym de la Albania |%g donum del Chipre |%g skales (σκάλες) del Chipre |%g stremma griega |%g stremma turca de la Grecia |%g dunam del Irak |%g dunam (dönüm, دونم) de la Turquía, Siria, Israel, Palestina, Jordania, Líbano |%g dunam (dönüm, دونم) antiguo (anterior a 1928) de la Turquía, Siria, Israel, Palestina, Jordania, Líbano |%g feddan (فدّان) del Egipto, Sudán, Siria, Omán |%g kirat (قيراط) del Egipto |%g manzana de la Argentina |%g manzana de la Belice |%g manzana de la Costa Rica |%g manzana de la Guatemala |%g manzana de la Honduras |%g manzana de la Nicaragua |%g cuadra de la Argentina |%g cuadra del Chile |%g cuadra del Ecuador |%g cuadra del Paraguay |%g cuadra del Perú |%g cuadra del Uruguay |%g vara cuadrada de Panamá y Colombia |%g vara cuadrada de Chile, Costa Rica, República Dominicana, Ecuador, El Salvador, Guatemala, Honduras, México, Nicaragua, Perú, Santo Tomé y Príncipe, Venezuela |%g vara cuadrada de Cuba |%g vara cuadrada de la Argentina, Paraguay, Uruguay |%g vara cuadrada del Brasil |\n", cx, cy, cz, da, db, dc, dd, de, df, dg, dh, di, dj, dk, dl, dm, dn, do1, dp, dq, dr, ds, dt, du, dv, dw, dx, dy

                print "-----------------------------"
                print "----CALIBRE DE LOS CABLES----"
                print "-----------------------------"
                printf "%g pulgada circular |%g kcmil, MCM |%g cmil |\n", dz, ea, eb

                print "------------------------------"
                print "-----------NATURALES-----------"
                print "------------------------------"
                printf "%g L² |\n", ec

                print "¡CATEC le agradece su consulta!"
            }'
            ;;
        2)
            read -p "Ingrese un valor en l: " n1
            awk -v n1="$n1" 'BEGIN {
                a = n1 / 100
                b = n1 / 10
                c = n1
                d = n1 * 10
                e = n1 * 100
                f = n1 * 1000
                g = n1 * 1000000
                h = n1 / 1000000000000
                i = n1 / 1000
                j = n1
                k = n1 * 1000
                l = n1 * 1000000

                m = n1 / 10000000000 * 8107
                n = n1 / 100000 * 629
                o = n1 / 10000 * 2642 
                p = n1 / 1000 * 1057
                q = n1 / 1000 * 2113
                r = n1 / 1000 * 8454
                s = n1 / 100 * 3381
                t = n1 / 10 * 2705
                u = n1 * 16231

                v = n1 / 1000000 *  8648
                w = n1 / 100000 * 2838
                x = n1 / 10000 * 1135
                y = n1 / 1000 * 227
                z = n1 / 10000 * 9081
                aa = n1 / 1000 * 1816

                ab = n1 / 1000 * 2113
                ac = n1 / 1000 * 4227
                ad = n1 / 1000 * 4227
                ae = n1 / 1000 * 6763
                af = n1 / 100 * 1691
                ag = n1 / 100 * 3381
                ah = n1 / 100 * 6763
                ai = n1 / 10 * 1353
                aj = n1 / 10 * 2705
                ak = n1 / 10 * 2705
                al = n1 * 16231

                au = n1 / 1000000 * 1427
                av = n1 / 100000 * 611
                aw = n1 / 10000 * 275
                ax = n1 / 100 * 11
                ay = n1 / 100 * 22
                az = n1 / 10000 * 8799
                ba = n1 / 100 * 176
                bb = n1 / 10 * 352
                bc = n1 / 10 * 2816
                bd = n1 / 10 * 8447
                be = n1 * 16894

                bf = n1 / 10000000000000000 * 2399
                bg = n1 / 100000000 * 3531
                bh = n1 / 1000000 * 1308
                bi = n1 / 10000000 * 3531
                bj = n1 / 100000 * 3531
                bk = n1 / 100 * 6102

                bl = n1 / 1000000 * 1047
                bm = n1 / 1000000 * 2095
                bn = n1 / 1000000 * 3142
                bo = n1 / 100000 * 419
                bp = n1 / 1000000 * 6285
                bq = n1 / 100000 * 838
                br = n1 / 100000 * 1466

                bs = n1 / 1000000 * 1018
                bt = n1 / 100000 * 611
                bu = n1 / 100000 * 1222
                bv = n1 / 100000 * 1222 * 2
                bw = n1 / 100000 * 1222 * 4

                bx = n1 / 1000000 * 8522
                by = n1 / 100000 * 1704
                bz = n1 / 100000 * 1704
                ca = n1 / 100000 * 3409

                cb = n1 / 1000 * 4227
                cc = n1 / 100 * 6763
                cd = n1 / 10 * 2029

                ce = n1 * 50
                cf = n1 * 100
                cg = n1 * 200

                ch = n1 / 1000 * 4167
                ci = n1 / 100 * 6667
                cj = n1 * 200

                ck = n1 * 236731775796070000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

                cl = n1 / 100000000000000000000000000000000000000000000000000000000 * 3404
                cm = n1 / 1000000000000000000000000000000000000000000000000000000 * 1181
                cn = n1 / 10000000000000000000000000000000000000 * 1718
                co = n1 / 100000000000000000000000000000000 * 3711

                cp = n1 / 100000 * 14
                cq = n1 / 10000000 * 3531
                cr = n1 / 10000000 * 3531

                cs = n1 / 10000000000 * 4238
                ct = n1 / 10000000 * 2759
                cu = n1 / 10000000 * 4238
                cv = n1 / 10000000 * 5547
                cw = n1 / 10000000 * 8829
                cx = n1 / 1000 * 1
                cy = n1 / 100000 * 2774
                cz = n1 / 10000 * 4238

                da = n1 / 10 * 5544
                db = n1 / 100 * 5544
                dc = n1 / 1000 * 5544
                dd = n1 / 10000 * 5544
                de = n1 / 100000 * 5544
                df = n1 / 1000000 * 5544

                dg = n1 / 1000000 * 9657
                dh = n1 / 100000 * 1931
                di = n1 / 100000 * 9657
                dj = n1 / 10000 * 9657
                dk = n1 / 1000 * 9657
                dl = n1 / 100 * 9657

                dm = n1 / 100
                dn = n1 / 10
                do1 = n1
                dp = n1 * 10
                dq = n1 * 100
                dr = n1 * 1000

                ds = n1 * 5 / 10000
                dt = n1 * 4 / 100
                du = n1 * 5 / 100
                dv = n1 * 1
                dw = n1 * 8
                dx = n1 * 32
                dy = n1 * 128

                dz = n1 / 100000 * 1957
                ea = n1 / 10000 * 1174
                eb = n1 / 10000 * 2348
                ec = n1 / 10000 * 9393
                ed = n1 / 1000 * 1879
                ee = n1 / 1000 * 3757
                ef = n1 / 100 * 1503
                eg = n1 / 100 * 2254
                eh = n1 / 10 * 2254

                ei = n1 / 100000 * 2609
                ej = n1 / 100000 * 3914
                ek = n1 / 10000 * 3131
                el = n1 / 1000 * 1879
                em = n1 / 1000 * 3757
                en = n1 / 1000 * 7514
                eo = n1 / 100 * 1503
                ep = n1 / 100 * 2254
                eq = n1 / 100 * 4509
                er = n1 / 100 * 9017
                es = n1 / 10 * 1127
                et = n1 / 10 * 2254

                eu = n1 / 1000000 * 1928
                ev = n1 / 100000 * 3856
                ew = n1 / 100000 * 7712
                ex = n1 / 100000 * 7712
                ey = n1 / 10000 * 1157
                ez = n1 / 10000 * 2314
                fa = n1 / 10000 * 3085
                fb = n1 / 1000 * 1851
                fc = n1 / 1000 * 3702
                fd = n1 / 1000 * 3702
                fe = n1 / 1000 * 5552
                ff = n1 / 1000 * 7403
                fg = n1 / 10 * 111
                fh = n1 / 100 * 1481
                fi = n1 / 100 * 2221
                fj = n1 / 100 * 8884

                fk = n1 / 1000000 * 1502
                fl = n1 / 100000 * 1802
                fm = n1 / 100000 * 7209
                fn = n1 / 10000 * 2163
                fo = n1 / 10000 * 4325
                fp = n1 / 10000 * 8651
                fq = n1 / 10000 * 2163

                fr = n1 / 1000000 * 3875
                fs = n1 / 1000 * 62
                ft = n1 / 1000 * 62
                fu = n1 / 1000 * 496
                fv = n1 / 1000 * 1323
                fw = n1 / 1000 * 1984
                fx = n1 / 1000 * 7937
                fy = n1 / 1000 * 7943
                fz = n1 / 1000 * 7937

                ga = n1 / 1000000 * 1208
                gb = n1 / 100000 * 1812
                gc = n1 / 100000 * 7246
                gd = n1 / 10000 * 2899
                ge = n1 / 10000 * 5797
                gf = n1 / 1000 * 1159
                gg = n1 / 1000 * 2319
                gh = n1 / 1000 * 4638
                gi = n1 / 1000 * 9275

                gj = n1 / 100000 * 119
                gk = n1 / 1000000 * 2381
                gl = n1 / 100000 * 5952
                gm = n1 / 100000 * 5952
                gn = n1 / 1000 * 119
                go = n1 / 10000 * 7143
                gp = n1 / 1000 * 2857
                gq = n1 / 1000 * 5714
                gr = n1 / 100 * 1143

                gs = n1 / 100000 * 2941
                gt = n1 / 1000 * 1203

                gu = n1 / 100000 * 3811
                gv = n1 / 10000 * 813
                gw = n1 / 10000 * 3049

                gx = n1 / 10000 * 813
                gy = n1 / 1000 * 813
                gz = n1 / 10000 * 3252
                ha = n1 / 1000 * 1301
                hb = n1 / 1000 * 1626
                hc = n1 / 100 * 813
                hd = n1 / 100 * 1626

                he = n1 / 1000000 * 4545
                hf = n1 / 1000000 * 9091
                hg = n1 / 100000 * 4545
                hh = n1 / 10000 * 1364
                hi = n1 / 10000 * 8182
                hj = n1 / 1000 * 3273
                hk = n1 / 100 * 1964
                hl = n1 / 100 * 3927

                hm = n1 / 100000 * 4545
                hn = n1 / 10000 * 2727
                ho = n1 / 1000 * 3273

                print "------------------------------"
                print "-------TAMAÑOS MÉTRICOS-------"
                print "------------------------------"
                printf "%g hl |%g decalitro |%g l |%g dl |%g cl |%g ml |%g µl |%g km³ |%g m³ |%g dm³ |%g cc |%g mm³ |\n", a, b, c, d, e, f, g, h, i, j, k, l

                print "------------------------------"
                print "---------EEUU LÍQUIDOS---------"
                print "------------------------------"
                printf "%g acre-pie |%g barril (petróleo) |%g gal |%g qt |%g pt |%g gill |%g fl oz |%g fl dr |%g min |\n", m, n, o, p, q, r, s, t, u

                print "------------------------------"
                print "----------EEUU SECOS----------"
                print "------------------------------"
                printf "%g barril |%g bu |%g pk |%g gal |%g qt |%g pt |\n", v, w, x, y, z, aa

                print "------------------------------"
                print "---------APOTHECARIES---------"
                print "------------------------------"
                printf "%g pt |%g vaso de vidrio |%g taza de café de la mañana |%g taza de té |%g copa de vino |%g ƒ℥ |%g cuchara de sopa |%g cuchara de postre |%g ƒʒ |%g cuchara de té |%g minim |\n", ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al

                print "------------------------------"
                print "----------INGLATERRA----------"
                print "------------------------------"
                printf "%g perch |%g barril |%g bu |%g pk |%g gal |%g qt |%g pt |%g oz |%g fl dr |%g escrópulo líquido |%g min |\n", au, av, aw, ax, ay, az, ba, bb, bc, bd, be

                print "------------------------------"
                print "--------EEUU/INGLATERRA--------"
                print "------------------------------"
                printf "%g mi³ |%g mcf |%g yd³ |%g ccf |%g ft³ |%g in³ |\n", bf, bg, bh, bi, bj, bk

                print "------------------------------"
                print "--------INGLATERRA|VINO--------"
                print "------------------------------"
                printf "%g tun |%g butt |%g puncheon |%g hogsheads |%g tierce |%g barril |%g rundlet |\n", bl, bm, bn, bo, bp, bq, br

                print "------------------------------"
                print "------INGLATERRA|CERVEZA------"
                print "------------------------------"
                printf "%g hogsheads |%g barril |%g kilderkin |%g firkin |%g pin |\n", bs, bt, bu, bv, bw

                print "------------------------------"
                print "---------EEUU|CERVEZA---------"
                print "------------------------------"
                printf "%g Barril de cerveza estadounidense |%g Medio barril de cerveza estadounidense |%g Barrilete de cerveza estadounidense (típico) |%g Cuarto de barril de cerveza estadounidense |\n", bx, by, bz, ca

                print "------------------------------"
                print "----------EEUU~COCINA----------"
                print "------------------------------"
                printf "%g taza |%g cucharada |%g cucharadita |\n", cb, cc, cd

                print "------------------------------"
                print "-------AUSTRALIA~COCINA-------"
                print "------------------------------"
                printf "%g cuchara de sopa |%g cuchara de postre |%g cuchara de té |\n", ce, cf, cg

                print "------------------------------"
                print "------------COCINA------------"
                print "------------------------------"
                printf "%g taza |%g cucharada |%g cucharadita |\n", ch, ci, cj

                print "------------------------------"
                print "------UNIDADES NATURALES------"
                print "------------------------------"
                printf "%g L³ |\n", ck

                print "------------------------------"
                print "----------ASTRONOMÍA----------"
                print "------------------------------"
                printf "%g pc³ |%g año-luz cúbico |%g minuto-luz cúbico |%g segundo-luz cúbico |\n", cl, cm, cn, co

                print "------------------------------"
                print "------------NAVAL------------"
                print "------------------------------"
                printf "%g arqueo |%g tonelada de registro |%g Sistema Universal de Medición del Canal de Panamá |\n", cp, cq, cr

                print "------------------------------"
                print "------------MADERA------------"
                print "------------------------------"
                printf "%g millión del board-feet (mmfbm, mmbdft, mmbf) |%g cuerda |%g mil board-feet (mfbm, mbdft, mbf) |%g HT |%g tonelada cúbica de madera |%g estere |%g hoppus pie, hoppus ft³ (h ft) |%g board-foot (fbmm, bdft, bf) |\n", cs, ct, cu, cv, cw, cx, cy, cz

                print "------------------------------"
                print "-------------JAPÓN-------------"
                print "------------------------------"
                printf "%g sai |%g shaku |%g go |%g sho |%g to |%g koku |\n", da, db, dc, dd, de, df

                print "------------------------------"
                print "--------CHINA 1915#1930--------"
                print "------------------------------"
                printf "%g dan |%g hu |%g dou |%g sheng |%g ge |%g shao |\n", dg, dh, di, dj, dk, dl

                print "------------------------------"
                print "--------CHINA 1930#HOY--------"
                print "------------------------------"
                printf "%g dan |%g dou |%g sheng |%g ge |%g shao |%g cuo |\n", dm, dn, do1, dp, dq, dr

                print "------------------------------"
                print "-----------TAILANDIA-----------"
                print "------------------------------"
                printf "%g kwian |%g sat |%g thang |%g thanan |%g fai mue |%g kam mue |%g yip mue |\n", ds, dt, du, dv, dw, dx, dy

                print "------------------------------"
                print "-------GRECIA ÁTICO SECO-------"
                print "------------------------------"
                printf "%g medimnos |%g hekteus |%g hēmiekton |%g choinix |%g xestēs |%g kotylē ou hēmina |%g oxybathon |%g kyathos |%g kochliarion |\n", dz, ea, eb, ec, ed, ee, ef, eg, eh

                print "------------------------------"
                print "-----GRECIA ÁTICO LÍQUIDO-----"
                print "------------------------------"
                printf "%g metrētēs |%g keramion |%g chous |%g xestēs |%g kotylē, tryblion ou hēmina |%g tetarton, hēmikotylē |%g oxybathon |%g kyathos |%g konchē |%g mystron |%g chēmē |%g kochliarion |\n", ei, ej, ek, el, em, en, eo, ep, eq, er, es, et

                print "------------------------------"
                print "-------------ROMA-------------"
                print "------------------------------"
                printf "%g culeus |%g amphora quadrantal |%g urna |%g modius castrensis |%g modius |%g semimodius |%g congius |%g sextarius |%g hemina |%g cotyla |%g triens |%g quartarius |%g sextans |%g acetabulum |%g cyathus |%g ligula |\n", eu, ev, ew, ex, ey, ez, fa, fb, fc, fd, fe, ff, fg, fh, fi, fj

                print "------------------------------"
                print "-----ESPAÑA ANTIGUA SECO-----"
                print "------------------------------"
                printf "%g cahíz |%g fanega |%g cuartilla |%g celemín |%g medio |%g cuartillo |%g ochavo |\n", fk, fl, fm, fn, fo, fp, fq

                print "------------------------------"
                print "----ESPAÑA ANTIGUA LÍQUIDO----"
                print "------------------------------"
                printf "%g moyo |%g cántara |%g arroba |%g azumbre |%g botella |%g cuartillo |%g copa |%g panilla |%g cortadillo |\n", fr, fs, ft, fu, fv, fw, fx, fy, fz

                print "------------------------------"
                print "-----PORTUGAL ANTIGUO SECO-----"
                print "------------------------------"
                printf "%g moio |%g fanga |%g alqueire |%g quarta |%g oitava |%g maquia |%g selamim |%g meio-selamim |%g quarto de selamim |\n", ga, gb, gc, gd, ge, gf, gg, gh, gi

                print "------------------------------"
                print "---PORTUGAL ANTIGUO LÍQUIDO---"
                print "------------------------------"
                printf "%g tonel |%g pipa |%g almude |%g cântaro |%g pote |%g canada |%g quartilho |%g meio-quartilho |%g quarto de quartilho |\n", gj, gk, gl, gm, gn, go, gp, gq, gr

                print "------------------------------"
                print "--------FRANCÉS ANTIGUO--------"
                print "------------------------------"
                printf "%g minot |%g litron |\n", gs, gt

                print "------------------------------"
                print "------RUSIA ANTIGUA SECA------"
                print "------------------------------"
                printf "%g cetverik |%g vedro |%g garnetz |\n", gu, gv, gw

                print "------------------------------"
                print "-----RUSIA ANTIGUA LÍQUIDA-----"
                print "------------------------------"
                printf "%g vedro |%g shtoff |%g chetvert |%g botella de vino |%g botella de vodka |%g charka |%g shkalik |\n", gx, gy, gz, ha, hb, hc, hd

                print "------------------------------"
                print "---------BIBLIA SECO---------"
                print "------------------------------"
                printf "%g coro |%g letec |%g efa |%g seá |%g cabe |%g log |%g bezah |%g kezayit |\n", he, hf, hg, hh, hi, hj, hk, hl

                print "------------------------------"
                print "--------BIBLIA LÍQUIDO--------"
                print "------------------------------"
                printf "%g bato |%g him |%g log |\n", hm, hn, ho

                print "¡CATEC le agradece su consulta!"
            }'
            ;;
        3)
            read -p "Ingrese un valor en km: " n1
            awk -v n1="$n1" 'BEGIN {
                a = n1
                b = n1 * 10
                c = n1 * 100
                d = n1 * 1000
                e = n1 * 10000
                f = n1 * 100000
                g = n1 * 1000000
                h = n1 * 1000000000
                i = n1 * 1000000000000
                j = n1 * 10000000000000

                k = n1 / 10000 * 2071
                l = n1 / 10000 * 6214
                m = n1 / 10000 * 6214
                n = n1 / 1000 * 4971
                o = n1 / 100 * 2734 
                p = n1 / 100 * 4971
                q = n1 / 10 * 1988
                r = n1 / 10 * 1988
                s = n1 / 10 * 1988
                t = n1 * 1094
                u = n1 * 3281
                v = n1 * 4374
                w = n1 * 9843
                x = n1 * 39370
                y = n1 * 472441
                z = n1 * 39370079
                aa = n1 * 39370078740

                ab = n1 / 10000 * 2071
                ac = n1 / 10000 * 6214
                ad = n1 / 10000 * 6214
                ae = n1 / 1000 * 9113
                af = n1 / 100 * 2734
                ag = n1 / 100 * 3645
                ah = n1 / 1000 * 4971
                ai = n1 / 100 * 4971
                aj = n1 * 164
                ak = n1 / 10 * 1988
                al = n1 / 10 * 7291
                au = n1 / 10 * 8749
                av = n1 * 1094
                aw = n1 * 1312
                ax = n1 * 2187
                ay = n1 * 3281
                az = n1 * 4374
                ba = n1 * 4374
                bb = n1 * 6562
                bc = n1 * 9843
                bd = n1 * 13123
                be = n1 * 39370
                bf = n1 * 44994
                bg = n1 * 52494
                bh = n1 * 118110
                bi = n1 * 472441
                bj = n1 * 472441
                bk = n1 * 472441
                bl = n1 * 3937015
                bm = n1 * 39370147
                bn = n1 * 39370147

                bo = n1 / 1000 * 4971
                bp = n1 / 100 * 3281
                bq = n1 / 100 * 4971
                br = n1 / 100 * 9942
                bs = n1 / 10 * 1988
                bt = n1 * 1094
                bu = n1 * 3281
                bv = n1 * 4971
                bw = n1 * 4971
                bx = n1 * 3281

                by = n1 / 100 * 18
                bz = n1 / 100 * 54
                ca = n1 / 10 * 54
                cb = n1 / 10 * 5468

                cc = n1 / 10000 * 5396
                cd = n1 / 1000 * 4557
                ce = n1 / 10 * 5468

                cf = n1 / 10000 * 5396
                cg = n1 / 1000 * 5396

                ch = n1 / 1000 * 7698
                ci = n1 * 10
                cj = n1 / 1000 * 7975
                ck = n1 / 10 * 125
                cl = n1 / 10 * 119
                cm = n1 / 10 * 119
                cn = n1 / 100 * 1154
                co = n1 / 100 * 1164
                cp = n1 * 1155
                cq = n1 / 10 * 9091
                cr = n1 * 1196
                cs = n1 * 1250
                ct = n1 * 1196
                cu = n1 * 1179
                cv = n1 * 1196
                cw = n1 * 1190
                cx = n1 * 1193
                cy = n1 * 1190
                cz = n1 * 1198
                da = n1 * 1193
                db = n1 * 1190
                dc = n1 * 1250
                dd = n1 * 1151
                de = n1 * 1193
                df = n1 * 1196
                dg = n1 * 1164
                dh = n1 * 1190
                di = n1 * 1196

                dj = n1 / 10000 * 2546
                dk = n1 / 1000 * 9167
                dl = n1 * 330
                dm = n1 * 550
                dn = n1 * 550
                do1 = n1 * 3300
                dp = n1 * 33000
                dq = n1 * 330000
                dr = n1 * 3300000
                ds = n1 * 33000000

                dt = n1 / 10 * 1736
                du = n1 / 100 * 3125
                dv = n1 / 10 * 3125
                dw = n1 * 625
                dx = n1 * 3125
                dy = n1 * 31250
                dz = n1 * 312500
                ea = n1 * 3125000
                eb = n1 * 31250000
                ec = n1 * 312500000
                ed = n1 * 3125000000

                ee = n1 * 2
                ef = n1 * 30
                eg = n1 * 300
                eh = n1 * 3000
                ei = n1 * 30000
                ej = n1 * 300000
                ek = n1 * 3000000
                el = n1 * 30000000
                em = n1 * 300000000
                en = n1 * 3000000000
                eo = n1 * 3000000

                ep = n1 * 2692
                eq = n1 * 26920
                er = n1 * 269197

                es = n1 / 10000 * 625
                et = n1 * 25
                eu = n1 * 500
                ev = n1 * 2000
                ew = n1 * 4000
                ex = n1 * 48000
                ey = n1 * 192000

                ez = n1 / 1000

                fa = n1 / 10000 * 1348

                fb = n1 * 22497
                fc = n1 * 196850

                fd = n1 * 236220
                fe = n1 * 236220
                ff = n1 * 2834646
                fg = n1 * 2834646
                fh = n1 * 3779528
                fi = n1 * 56692913

                fj = n1 * 221648
                fk = n1 * 2659776

                fl = n1 * 150000

                fm = n1 / 1000000000000000000000000000 * 7676
                fn = n1 / 100000000000000000 * 3241
                fo = n1 / 10000000000000000 * 1057
                fp = n1 / 1000000000000 * 6685
                fq = n1 / 100000000000 * 5559
                fr = n1 / 1000000000 * 3336

                fs = n1 * 3336
                ft = n1 * 3336
                fu = n1 * 3335641

                fv = n1 / 10000000000000000000000000000000000000000 * 6187

                fw = n1 / 100000 * 9524
                fx = n1 / 100 * 1905
                fy = n1 * 1778
                fz = n1 * 1905
                ga = n1 * 2222
                gb = n1 * 2667
                gc = n1 * 3333
                gd = n1 * 3810
                ge = n1 * 4444
                gf = n1 * 8889
                gg = n1 * 10667
                gh = n1 * 13333
                gi = n1 * 53333

                gj = n1 / 10000 * 1349
                gk = n1 / 10000 * 1799
                gl = n1 / 10000 * 4498
                gm = n1 / 10000 * 6747
                gn = n1 / 1000 * 1349
                go = n1 / 1000 * 2699
                gp = n1 / 1000 * 5397
                gq = n1 / 1000 * 5201
                gr = n1 / 1000 * 5406
                gs = n1 / 1000 * 5405
                gt = n1 / 100 * 3238
                gu = n1 / 100 * 5397
                gv = n1 / 10 * 3238
                gw = n1 / 10 * 3238
                gx = n1 / 10 * 3238
                gy = n1 / 10 * 5397
                gz = n1 / 10 * 6477
                ha = n1 * 1295
                hb = n1 * 2159
                hc = n1 * 2591
                hd = n1 * 2879
                he = n1 * 3238
                hf = n1 * 4318
                hg = n1 * 4710
                hh = n1 * 5181
                hi = n1 * 6477
                hj = n1 * 6477
                hk = n1 * 12953
                hl = n1 * 12953
                hm = n1 * 25907
                hn = n1 * 51813

                ho = n1 / 10000 * 1689
                hp = n1 / 10000 * 4505
                hq = n1 / 10000 * 6757
                hr = n1 / 1000 * 5405
                hs = n1 / 100 * 2815
                ht = n1 / 10 * 3378
                hu = n1 / 10 * 3378
                hv = n1 / 10 * 6757
                hw = n1 * 1351
                hx = n1 * 1351
                hy = n1 * 2252
                hz = n1 * 2703
                ia = n1 * 3378
                ib = n1 * 4505
                ic = n1 * 13514
                id = n1 * 40541
                ie = n1 * 40541
                ig = n1 * 54054

                ih = n1 / 10000 * 1495
                ii = n1 / 10000 * 1794
                ij = n1 / 10000 * 2393
                ik = n1 / 10000 * 5383
                il = n1 / 10000 * 7178
                im = n1 / 100 * 2991
                io = n1 * 145
                ip = n1 / 10 * 2991
                iq = n1 / 10 * 2991 * 2
                ir = n1 / 10 * 7178
                it = n1 * 1196
                iu = n1 * 1794
                iv = n1 * 2393
                iw = n1 * 3589
                ix = n1 * 4785
                iy = n1 * 9570
                iz = n1 * 43067
                ja = n1 * 516805
                jb = n1 * 6201662

                jc = n1 / 10 * 4545
                jd = n1 / 10 * 7576
                je = n1 / 10 * 6061
                jf = n1 / 10 * 9091
                jg = n1 * 1515
                jh = n1 * 1515 * 2
                ji = n1 * 1515 * 3
                jj = n1 * 36364
                jk = n1 * 436364
                jl = n1 * 5236364

                jm = n1 / 10000 * 2246
                jn = n1 / 10000 * 2252
                jo = n1 / 10000 * 2565
                jp = n1 / 100 * 25
                jq = n1 / 10 * 171
                jr = n1 * 171
                js = n1 / 10 * 5131
                jt = n1 * 3078
                ju = n1 * 36941
                jv = n1 * 443295

                jw = n1 / 10000 * 1339
                jx = n1 / 10000 * 9374
                jy = n1 / 10000 * 4687
                jz = n1 / 10 * 4032
                ka = n1 / 10 * 4687
                kb = n1 / 10 * 5682
                kc = n1 * 1406
                kd = n1 * 2381
                ke = n1 * 3281
                kf = n1 * 5624
                kg = n1 * 22497
                kh = n1 * 39370
                ki = n1 * 393701

                kj = n1 / 10000 * 1328
                kk = n1 / 10 * 2655
                kl = n1 * 1499
                km = n1 * 3186
                kn = n1 * 38233
                ko = n1 * 458793

                kp = n1 / 10000 * 1318
                kq = n1 / 10 * 2636
                kr = n1 / 10 * 5273
                ks = n1 * 3164
                kt = n1 * 37965
                ku = n1 * 455581
                kv = n1 * 5466970

                kw = n1 / 10
                kx = n1 / 100000 * 9356
                ky = n1 / 10000 * 3742
                kz = n1 / 100 * 2105
                la = n1 / 100 * 3368
                lb = n1 / 10 * 2105
                lc = n1 / 10 * 5614
                ld = n1 * 1684
                le = n1 * 3368
                lf = n1 * 6736
                lg = n1 * 10104
                lh = n1 * 40418
                li = n1 * 33681
                lj = n1 * 485012
                lk = n1 * 404176

                ll = n1 * 2187
                lm = n1 * 4374
                ln = n1 * 13123
                lo = n1 * 52493

                print "------------------------------"
                print "-------TAMAÑOS MÉTRICOS-------"
                print "------------------------------"
                printf "%g km |%g hm |%g dam |%g m |%g dm |%g cm |%g mm |%g micrón |%g nm |%g Å|\n", a, b, c, d, e, f, g, h, i, j

                print "------------------------------"
                print "-------EEUU Y INGLATERRA-------"
                print "------------------------------"
                printf "%g legua |%g mi |%g land |%g furlong |%g bolt |%g chain |%g pole |%g rd |%g perch |%g yd |%g ft |%g palmo |%g hand |%g in |%g línea |%g mil |%g micropulgada |\n", k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, aa

                print "------------------------------"
                print "----------INGLATERRA----------"
                print "------------------------------"
                printf "%g legua |%g mi |%g land |%g skein |%g bolt |%g shackle |%g furlong |%g corriente |%g rope |%g pole |%g goad |%g ell |%g yd |%g ritmo |%g codo |%g ft |%g palmo |%g nail |%g shaftment |%g hd |%g plm |%g in |%g finger |%g digitus |%g granos de cebada |%g semillas de amapola |%g línea |%g botón |%g calibre |%g thou |%g mil |\n", ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, au, av, aw, ax, ay, az, ba, bb, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, bm, bn

                print "-----------------------------"
                print "-----AGRIMENSURA DE EEUU-----"
                print "-----------------------------"
                printf "%g furlong |%g corriente de ramsden - ingeniería |%g corriente de gunter - agrimensor |%g corriente de gurley |%g pole de gunter |%g yard de gunter |%g link de ramsden |%g link de gunter |%g link de gurley |%g pie de gunter |\n", bo, bp, bq, br, bs, bt, bu, bv, bw, bx

                print "-----------------------------"
                print "-----------NÁUTICA-----------"
                print "-----------------------------"
                printf "%g naut.leg |%g naut.mi |%g cbl |%g fath |\n", by, bz, ca, cb

                print "-----------------------------"
                print "---------NÁUTICA EEUU---------"
                print "-----------------------------"
                printf "%g milla marítima estadounidense |%g cabo estadounidense |%g fath |\n", cc, cd, ce

                print "------------------------------"
                print "------NÁUTICA INGLATERRA------"
                print "------------------------------"
                printf "%g punta del Almirantado |%g cabo del Almirantado |\n", cf, cg

                print "-----------------------------"
                print "-----------ESPAÑA-----------"
                print "-----------------------------"
                printf "%g cuadra de Argentina |%g cuadra de Bolivia |%g cuadra de Chile |%g cuadra de Colombia |%g cuadra de Ecuador |%g cuadra de Nicaragua |%g cuadra de Paraguay |%g cuadra de Uruguay |%g vara de Argentina |%g vara de Brasil |%g vara de Chile |%g vara de Colombia |%g vara de Costa Rica |% g vara de Cuba |%g vara de la República Dominicana |%g vara de Ecuador |%g vara de El Salvador |%g vara de Guatemala |%g vara de Honduras |%g vara de México |%g vara de Nicaragua |%g vara de Panamá |%g vara de Paraguay |%g vara de Perú - peruano |%g vara de Perú - español |%g vara de Uruguay |%g vara de Santo Tomé y Príncipe |%g vara de Venezuela |\n", ch, ci, cj, ck, cl, cm, cn, co, cp, cq, cr, cs, ct, cu, cv, cw, cx, cy, cz, da, db, dc, dd, de, df, dg, dh, di

                print "-----------------------------"
                print "------------JAPÓN------------"
                print "-----------------------------"
                printf "%g ri |%g cho |%g jo |%g hiro |%g ken |%g shaku |%g sun |%g bu |%g rin |%g mo |\n", dj, dk, dl, dm, dn, do1, dp, dq, dr, ds

                print "-----------------------------"
                print "-------CHINA 1915#1930-------"
                print "-----------------------------"
                printf "%g li - ⾥ |%g yin |%g zhang |%g bu |%g chi |%g cun |%g fen |%g li - 㢆 ou 釐 |%g hao |%g si |%g hu |\n", dt, du, dv, dw, dx, dy, dz, ea, eb, ec, ed

                print "-----------------------------"
                print "-------CHINA 1930#HOY-------"
                print "-----------------------------"
                printf "%g li - ⾥ |%g yin |%g zhang |%g chi |%g cun |%g fen |%g li - 㢆 |%g hao |%g si |%g hu |%g li - 釐 |\n", ee, ef, eg, eh, ei, ej, ek, el, em, en, eo

                print "-----------------------------"
                print "----------HONG KONG----------"
                print "-----------------------------"
                printf "%g cek |%g tsun |%g fan |\n", ep, eq, er

                print "-----------------------------"
                print "----------TAILANDIA----------"
                print "-----------------------------"
                printf "%g yot |%g sen |%g wa |%g sok |%g khuep |%g nio |%g krabiat |\n", es, et, eu, ev, ew, ex, ey

                print "------------------------------"
                print "------------ÓPTICA------------"
                print "------------------------------"
                printf "%g dioptría |\n", ez

                print "-----------------------------"
                print "------GEOGRAFÍA ALEMANA------"
                print "-----------------------------"
                printf "%g milla geográfica |\n", fa

                print "------------------------------"
                print "----------COMPUTACIÓN----------"
                print "------------------------------"
                printf "%g U |%g HP |\n", fb, fc

                print "-----------------------------"
                print "-------------ATA-------------"
                print "-----------------------------"
                printf "%g paica |%g paica - PostScript |%g punto |%g punto - PostScript |%g px |%g twip |\n", fd, fe, ff, fg, fh, fi

                print "-----------------------------"
                print "------------DIDOT------------"
                print "-----------------------------"
                printf "%g cícero |%g punto |\n", fj, fk

                print "-----------------------------"
                print "-------CALZADO EUROPEO-------"
                print "-----------------------------"
                printf "%g punto parisino |\n", fl

                print "------------------------------"
                print "----------ASTRONOMÍA----------"
                print "------------------------------"
                printf "%g z |%g pc |%g año-luz |%g au |%g minuto-luz |%g segundo-luz |\n", fm, fn, fo, fp, fq, fr

                print "------------------------------"
                print "---------GRACE HOPPER---------"
                print "------------------------------"
                printf "%g microssegundo-luz |%g nanossegundo-luz |%g picossegundo-luz |\n", fs, ft, fu

                print "------------------------------"
                print "-----------NATURALES-----------"
                print "------------------------------"
                printf "%g L |\n", fv

                print "-----------------------------"
                print "------------EGIPTO------------"
                print "-----------------------------"
                printf "%g iteru |%g knet |%g nbiw |%g meh niswt |%g meh nedjes |%g remen |%g djeser |%g pedj-aa |%g pedj-sheser |%g amem |%g deret |%g shesep |%g djeba |\n", fw, fx, fy, fz, ga, gb, gc, gd, ge, gf, gg, gh, gi

                print "------------------------------"
                print "------------GRECIA------------"
                print "------------------------------"
                printf "%g schoinos |%g parasanges |%g dolichos |%g mílion |%g hippikon |%g diaulos |%g stadion |%g estadio olímpico |%g estadio ático |%g estadio ptolemaico |%g plethron |%g hamma |%g dekapous |%g akaina |%g kalamos |%g orgyia |%g diploun bēma |%g haploun bēma |%g pēchys |%g pygōn |%g pygmē |%g pous |%g spithamē |%g orthodōron |%g lichas |%g hemipodion |%g dichas |%g dōron |%g palaiste |%g kondylos |%g daktylos |\n", gj, gk, gl, gm, gn, go, gp, gq, gr, gs, gt, gu, gv, gw, gx, gy, gz, ha, hb, hc, hd, he, hf, hg, hh, hi, hj, hk, hl, hm, hn

                print "------------------------------"
                print "-------------ROMA-------------"
                print "------------------------------"
                printf "%g schœnus |%g leuga |%g mille passus |%g stadium |%g actus |%g decempada |%g pertica |%g passus |%g pes sestertius |%g gradus |%g cubitus |%g palmipes |%g pes |%g palmus major |%g palmus |%g uncia |%g pollex |%g digitus |\n", ho, hp, hq, hr, hs, ht, hu, hv, hw, hx, hy, hz, ia, ib, ic, id, ie, ig

                print "------------------------------"
                print "--------ESPAÑA ANTIGUA--------"
                print "------------------------------"
                printf "%g legua de por grado |%g legua marina |%g legua |%g milla marina |%g milla |%g cuerda de Valencia |%g cuerda |%g estadal |%g braza |%g paso |%g vara |%g codo de ribera |%g codo |%g pie |%g palmo |%g coto |%g pulgada |%g linea |%g punto |\n", ih, ii, ij, ik, il, im, io, ip, iq, ir, it, iu, iv, iw, ix, iy, iz, ja, jb

                print "-----------------------------"
                print "-------PORTUGAL ANTIGUO-------"
                print "-----------------------------"
                printf "%g braça |%g toesa |%g passo geométrico |%g vara |%g côvado |%g pé |%g palmo de craveira |%g polegada |%g linha |%g ponto |\n", jc, jd, je, jf, jg, jh, ji, jj, jk, jl

                print "------------------------------"
                print "--------FRANCÉS ANTIGUO--------"
                print "------------------------------"
                printf "%g lieue commune |%g lieue marine |%g lieue de post |%g lieue metrique |%g arpent |%g perche |%g toise |%g pied |%g pouce |%g ligne |\n", jm, jn, jo, jp, jq, jr, js, jt, ju, jv

                print "-----------------------------"
                print "--------RUSIA ANTIGUA--------"
                print "-----------------------------"
                printf "%g milha |%g verst |%g mezhevaya verst |%g kosaya sazhen |%g sazhen |%g makhovaya sazhen |%g arshin |%g lokot |%g pé |%g pyad |%g vershok |%g polegada |%g linha |\n", jw, jx, jy, jz, ka, kb, kc, kd, ke, kf, kg, kh, ki

                print "------------------------------"
                print "------------PRUSIA------------"
                print "------------------------------"
                printf "%g meile |%g ruthe |%g elle |%g fuss |%g zoll |%g linie |\n", kj, kk, kl, km, kn, ko

                print "------------------------------"
                print "--------AUSTRIA ANTIGUA--------"
                print "------------------------------"
                printf "%g meile |%g ruthe |%g klafner |%g fuss |%g zoll |%g linie |%g punkt |\n", kp, kq, kr, ks, kt, ku, kv

                print "-----------------------------"
                print "--------SUECIA ANTIGUA--------"
                print "-----------------------------"
                printf "%g nymil |%g milha |%g fjärdingsväg |%g rev anterior a 1855 |%g rev posterior a 1855 |%g stång |%g famn |%g aln |%g fot |%g kvarter |%g tvärhand |%g tum anterior a 1855 |%g tum posterior a 1855 |%g linje anterior a 1855 |%g linje posterior a 1855 |\n", kw, kx, ky, kz, la, lb, lc, ld, le, lf, lg, lh, li, lj, lk

                print "------------------------------"
                print "------------BIBLIA------------"
                print "------------------------------"
                printf "%g codo |%g palmo |%g tephach |%g etzbah |\n", ll, lm, ln, lo

                print "¡CATEC le agradece su consulta!"
            }'
            ;;
        4)
            read -p "Ingrese un valor en kg: " n1
            awk -v n1="$n1" 'BEGIN {
                a = n1 / 1000000
                b = n1 / 1000
                c = n1 
                d = n1 * 1000
                e = n1 * 100000
                f = n1 * 1000000
                g = n1 * 1000000000
                h = n1 / 1000 * 9807
                i = n1 / 1000000 * 9807
                j = n1 * 5000
                k = n1 / 100
                l = n1 / 100
                m = n1 * 602214129011674000000000000
                n = n1 / 100000 * 6808
                o = n1 / 100000 * 1261 
                p = n1 / 100000 * 6808 / 4
                q = n1 / 100000 * 6808 * 32
                r = n1 / 100000 * 6808 * 128
                s = n1 / 100000 * 6808 * 512
                t = n1 / 100000 * 6808 * 4096
                u = n1 / 100000 * 6808 * 12288
                v = n1 / 100000 * 6808 * 294912
                w = n1 / 1000000 * 3623
                x = n1 / 100000 * 3212
                y = n1 / 100000 * 2415
                z = n1 / 100000 * 3105
                aa = n1 / 100000 * 3623
                ab = n1 / 10000 * 1449
                ac = n1 / 1000 * 2174
                ad = n1 / 1000 * 2174 * 2
                ae = n1 / 1000 * 2174 * 4
                af = n1 / 1000 * 2174 * 16
                ag = n1 / 1000 * 2174 * 128
                ah = n1 / 1000 * 2174 * 256
                ai = n1 / 1000 * 2174 * 9216
                aj = n1 / 100000 * 2043
                ak = n1 / 1000 * 2043
                al = n1 / 1000000 * 6105
                au = n1 / 1000000 * 6105 * 10
                av = n1 / 1000000 * 6105 * 400
                aw = n1 / 1000000 * 6105 * 12800
                ax = n1 / 1000000 * 6105 * 38400
                ay = n1 / 1000000 * 6105 * 3686400
                az = n1 / 1000000 * 6479
                ba = n1 / 1000000 * 9719
                bb = n1 / 100000 * 1944
                bc = n1 / 100000 * 9719
                bd = n1 / 1000 * 2138
                be = n1 / 1000 * 2138 * 2
                bf = n1 / 100 * 3421
                bg = n1 / 100 * 3421 * 2
                bh = n1 / 10 * 2053
                bi = n1 / 10 * 2737
                bj = n1 * 1095
                bk = n1 * 16420
                bl = n1 / 1000000 * 4464
                bm = n1 / 1000000 * 6493
                bn = n1 / 100000 * 1786
                bo = n1 / 100000 * 8117
                bp = n1 / 1000 * 1786
                bq = n1 / 1000 * 1786 * 2
                br = n1 / 1000 * 1786 * 4
                bs = n1 / 1000 * 1786 * 16
                bt = n1 / 100 * 6842
                bu = n1 / 100 * 6842 * 4
                bv = n1 / 100 * 6842 * 16
                bw = n1 / 1000000 * 5881
                bx = n1 / 1000000 * 5881 * 20
                by = n1 / 1000 * 196
                bz = n1 / 1000000 * 5881 * 400
                ca = n1 / 1000000 * 5881 * 800
                cb = n1 / 1000000 * 5881 * 40000
                cc = n1 / 1000000 * 1102
                cd = n1 / 1000000 * 1102 * 2000
                ce = n1 / 1000000 * 1102 * 32000
                cf = n1 / 10 * 2746
                cg = n1 * 5217
                ch = n1 / 100000 * 2939
                ci = n1 / 100000 * 2939 * 60
                cj = n1 / 100000 * 2939 * 3000
                ck = n1 / 100000 * 2939 * 4500
                cl = n1 / 100000 * 2939 * 6000
                cm = n1 / 100000 * 2939 * 60000
                cn = n1 / 100 * 3649 / 12
                co = n1 / 100 * 3649
                cp = n1 / 100 * 3649 * 2
                cq = n1 / 100 * 3649 * 3
                cr = n1 / 100 * 3649 * 4
                cs = n1 / 100 * 3649 * 6
                ct = n1 / 100 * 3649 * 8
                cu = n1 / 100 * 3649 * 12
                cv = n1 / 100 * 3649 * 24
                cw = n1 / 100 * 3649 * 48
                cx = n1 / 100 * 3649 * 144
                cy = n1 / 1000 * 3317
                cz = n1 / 1000 * 3649
                da = n1 / 1000 * 4054
                db = n1 / 1000 * 4561
                dc = n1 / 1000 * 5212
                dd = n1 / 100 * 3649 / 6
                de = n1 / 1000 * 7297
                df = n1 / 100 * 3649 / 4
                dg = n1 / 100 * 3649 / 3
                dh = n1 / 100 * 3649 / 3
                di = n1 / 100 * 3649 / 2
                dj = n1 / 100 * 2432
                dk = n1 / 100000 * 2646
                dl = n1 / 100000 * 2646 * 60
                dm = n1 / 100000 * 2646 * 600
                dn = n1 / 100000 * 2646 * 1500
                do1 = n1 / 100000 * 2646 * 3000
                dp = n1 / 100000 * 2646 * 3000
                dq = n1 / 100000 * 2646 * 6000
                dr = n1 / 100000 * 2646 * 9000
                ds = n1 / 100000 * 2646 * 12000
                dt = n1 / 100000 * 2646 * 18000
                du = n1 / 100000 * 2646 * 36000
                dv = n1 / 100000 * 2646 * 48000
                dw = n1 / 100000 * 2646 * 72000
                dx = n1 / 100000 * 2646 * 24000
                dy = n1 / 100000 * 2646 * 144000
                dz = n1 / 100000 * 2646 * 288000
                ea = n1 / 100000 * 3858
                eb = n1 / 100000 * 3858 * 60
                ec = n1 / 100000 * 3858 * 600
                ed = n1 / 100000 * 3858 * 1500
                ee = n1 / 100000 * 3858 * 3000
                ef = n1 / 100000 * 3858 * 3000
                eg = n1 / 100000 * 3858 * 6000
                eh = n1 / 100000 * 3858 * 9000
                ei = n1 / 100000 * 3858 * 12000
                ej = n1 / 100000 * 3858 * 18000
                ek = n1 / 100000 * 3858 * 36000
                el = n1 / 100000 * 3858 * 48000
                em = n1 / 100000 * 3858 * 72000
                en = n1 / 100000 * 3858 * 24000
                eo = n1 / 100000 * 3858 * 144000
                ep = n1 / 100000 * 3858 * 288000
                eq = n1 * 45945087
                er = n1 / 100000 * 1667
                es = n1 / 100000 * 1667 * 50
                et = n1 / 100000 * 1667 * 1000
                eu = n1 / 100000 * 1667 * 4000
                ev = n1 / 100 * 6596
                ew = n1 / 100000 * 1667 * 8000
                ex = n1 / 100000 * 1667 * 16000
                ey = n1 / 100000 * 1667 * 32000
                ez = n1 / 100000 * 1667 * 64000
                fa = n1 / 100000 * 1667 * 128000
                fb = n1 / 100000 * 1667 * 256000
                fc = n1 / 100000 * 1667 * 512000
                fd = n1 / 100000 * 1667 * 25600000
                fe = n1 / 100000 * 134
                ff = n1 / 100000 * 134 * 20
                fg = n1 / 100000 * 134 * 160
                fh = n1 / 100000 * 134 * 640
                fi = n1 / 100000 * 134 * 800
                fj = n1 / 100000 * 134 * 3200
                fk = n1 / 100000 * 134 * 12800
                fl = n1 / 100000 * 134 * 2400
                fm = n1 / 100000 * 134 * 57600
                fn = n1 / 100000 * 134 * 64000
                fo = n1 / 100000 * 134 * 768000
                fp = n1 / 100000 * 134 * 6144000
                fq = n1 / 10000 * 2667
                fr = n1 / 1000 * 1667
                fs = n1 / 10000 * 2667 * 10
                ft = n1 / 10000 * 2667 * 1000
                fu = n1 / 10000 * 2667 * 10000
                fv = n1 / 100000 * 1653
                fw = n1 / 1000 * 1653
                fx = n1 / 100 * 2646
                fy = n1 / 10 * 2646
                fz = n1 * 2646
                ga = n1 / 100 * 2672
                gb = n1 / 10 * 2672
                gc = n1 * 2672
                gd = n1 / 1000 * 1676
                ge = n1 / 1000 * 1676 * 16
                gf = n1 / 1000 * 1676 * 160
                gg = n1 / 1000 * 1676 * 1600
                gh = n1 / 1000 * 1676 * 16000
                gi = n1 / 1000 * 1676 * 160000
                gj = n1 / 100 * 2
                gk = n1 * 2
                gl = n1 * 32
                gm = n1 * 320
                gn = n1 * 3200
                go = n1 * 32000
                gp = n1 * 320000
                gq = n1 * 3200000
                gr = n1 / 100 * 2
                gs = n1 * 2
                gt = n1 * 20
                gu = n1 * 200
                gv = n1 * 2000
                gw = n1 * 20000
                gx = n1 * 200000
                gy = n1 * 2000000
                gz = n1 * 20000000
                ha = n1 / 10000000 * 9842
                hb = n1 / 1000000 * 1102
                hc = n1 / 1000000 * 2205
                hd = n1 / 100000 * 1968
                he = n1 / 100000 * 1968
                hf = n1 / 100000 * 2205
                hg = n1 / 10000 * 1575
                hh = n1 / 1000 * 2205
                hi = n1 / 100 * 3527
                hj = n1 / 10 * 5644
                hk = n1 * 15432
                hl = n1 / 1000 * 2679
                hm = n1 / 100 * 3215
                hn = n1 * 643
                ho = n1 * 4878
                hp = n1 * 15432
                hq = n1 * 308647
                hr = n1 * 7407532
                hs = n1 / 1000 * 2679
                ht = n1 / 100 * 3215
                hu = n1 / 10 * 2572
                hv = n1 / 10 * 7716
                hw = n1 * 15432

                print "-----------------------------"
                print "------------COMÚN------------"
                print "-----------------------------"
                printf "%g kT |%g T |%g kg |%g g |%g cg |%g mg |%g mcg |%g N |%g kN |%g ct |%g centner métrico |%g quintal métrico |%g amu |%g M |\n", a, b, c, d, e, f, g, h, i, j, k, l, m, eq
                
                print "------------------------------"
                print "---------APOTHECARIES---------"
                print "------------------------------"
                printf "%g lb |%g onza |%g dracma |%g escrópulo |%g grano |\n", hs, ht, hu, hv, hw
                
                print "------------------------------"
                print "-------------TROY-------------"
                print "------------------------------"
                printf "%g lb |%g ozt |%g dwt |%g ct |%g grano |%g mite |%g doite |\n", hl, hm, hn, ho, hp, hq, hr
                
                print "-----------------------------"
                print "---------AVOIRDUPOIS---------"
                print "-----------------------------"
                printf "%g T largo INGLATERRA |%g T corto EEUU |%g klb Masa |%g quintal largo REINO UNIDO |%g centner británico |%g quintal corto EEUU |%g st |%g lb |%g oz |%g dr |%g gr |\n", ha, hb, hc, hd, he, hf, hg, hh, hi, hj, hk
                
                print "------------------------------"
                print "-----------PORTUGAL-----------"
                print "------------------------------"
                printf "%g @ |%g T |%g quintal |%g arrátel |%g quarta |%g onza |%g oitava |%g escrópulo |%g grano |\n", n, o, p, q, r, s, t, u, v
                
                print "-----------------------------"
                print "------------ESPAÑA------------"
                print "-----------------------------"
                printf "%g T |%g alqueire de trigo |%g alqueire de centeio |%g alqueire de cevada |%g quintal |%g @ |%g £ |%g marco |%g cuarterón |%g onza |%g oitava |%g adame |%g grano |\n", w, x, y, z, aa, ab, ac, ad, ae, af, ag, ah, ai
                
                print "------------------------------"
                print "------------FRANCIA------------"
                print "------------------------------"
                printf "%g quintal |%g £ |\n", aj, ak
                
                print "------------------------------"
                print "-------------RUSIA-------------"
                print "------------------------------"
                printf "%g berkovets |%g pud |%g £ |%g lot |%g zolotnik |%g dolya |\n", al, au, av, aw, ax, ay
                
                print "-----------------------------"
                print "------------PRUSIA------------"
                print "-----------------------------"
                printf "%g schiffspfund |%g doppelzentner |%g zentner |%g stain |%g pfund |%g mark |%g unze |%g loth |%g quentchen |%g quint |%g pfennig |%g gran |\n", az, ba, bb, bc, bd, be, bf, bg, bh, bi, bj, bk
                
                print "-----------------------------"
                print "-----------AUSTRIA-----------"
                print "-----------------------------"
                printf "%g kauch |%g saum |%g zentner |%g stain |%g pfund |%g mark |%g vierding |%g unze |%g loth |%g quentchen |%g denzt |\n", bl, bm, bn, bo, bp, bq, br, bs, bt, bu, bv
                
                print "------------------------------"
                print "------------SUECIA------------"
                print "------------------------------"
                printf "%g skeppspund |%g lispund |%g bismerpund |%g skålpund |%g mark |%g ort |\n", bw, bx, by, bz, ca, cb
                
                print "-----------------------------"
                print "-------CHINA 1915#1930-------"
                print "-----------------------------"
                printf "%g jin |%g liang |%g qian |%g fen |%g li |%g hao |\n", gd, ge, gf, gg, gh, gi
                
                print "-----------------------------"
                print "-------CHINA 1930#1959-------"
                print "-----------------------------"
                printf "%g dan |%g jin |%g liang |%g qian |%g fen |%g li |%g hao |%g si |\n", gj, gk, gl, gm, gn, go, gp, gq
                
                print "-----------------------------"
                print "--------CHINA 1959#HOY--------"
                print "-----------------------------"
                printf "%g dan |%g jin |%g liang |%g qian |%g fen |%g li |%g hao |%g si |%g hu |\n", gr, gs, gt, gu, gv, gw, gx, gy, gz
                
                print "-----------------------------"
                print "-------------EEUU-------------"
                print "-----------------------------"
                printf "%g T curta |%g lb |%g oz |\n", cc, cd, ce
                
                print "-----------------------------"
                print "----------HONG KONG----------"
                print "-----------------------------"
                printf "%g picul |%g catty |%g tael |%g mace |%g candareen |%g tael troy |%g mace troy |%g candareen troy |\n", fv, fw, fx, fy, fz, ga, gb, gc
                
                print "-----------------------------"
                print "------------JAPÓN------------"
                print "-----------------------------"
                printf "%g kan |%g kin |%g nyakume |%g monnme |%g fun |\n", fq, fr, fs, ft, fu
                
                print "-----------------------------"
                print "------------INDIA------------"
                print "-----------------------------"
                printf "%g candy |%g maund |%g dhurra |%g halk |%g sèr |%g powa |%g chittak |%g parah |%g tank |%g tolä |%g māshā |%g rattī |\n", fe, ff, fg, fh, fi, fj, fk, fl, fm, fn, fo, fp
                
                print "-----------------------------"
                print "----------TAILANDIA----------"
                print "-----------------------------"
                printf "%g hap |%g chang |%g tamlueng |%g baht |%g baht ouro |%g mayon |%g salueng |%g fueang |%g seek |%g siao |%g ath |%g solos |%g bia |\n", er, es, et, eu, ev, ew, ex, ey, ez, fa, fb, fc, fd
                
                print "------------------------------"
                print "-------------ROMA-------------"
                print "------------------------------"
                printf "%g £ |%g onza |%g semionza |%g duella |%g sicílico |%g sextula |%g dracma |%g semisextula |%g escrópulo |%g óbolo |%g síliqua |%g deunx |%g dextans |%g dodrans |%g bes |%g septunx |%g semisse |%g quincunx |%g triente |%g quadrante |%g terúncio |%g sextante |%g sescúncia |\n", cn, co, cp, cq, cr, cs, ct, cu, cv, cw, cx, cy, cz, da, db, dc, dd, de, df, dg, dh, di, dj
                
                print "------------------------------"
                print "-------GRECIA EGINÉTICO-------"
                print "------------------------------"
                printf "%g talento |%g mina |%g decadracma |%g tetradracma |%g didracma |%g estáter |%g dracma |%g tetróbolo |%g trióbolo |%g dióbolo |%g óbolo |%g tritartemorion |%g hemióbolo |%g trihemitetartemorion |%g tetartemorion |%g hemitetartemorion |\n", dk, dl, dm, dn, do1, dp, dq, dr, ds, dt, du, dv, dw, dx, dy, dz
                
                print "------------------------------"
                print "---------GRECIA ÁTICO---------"
                print "------------------------------"
                printf "%g talento |%g mina |%g decadracma |%g tetradracma |%g didracma |%g estáter |%g dracma |%g tetróbolo |%g trióbolo |%g dióbolo |%g óbolo |%g tritartemorion |%g hemióbolo |%g trihemitetartemorion |%g tetartemorion |%g hemitetartemorion |\n", ea, eb, ec, ed, ee, ef, eg, eh, ei, ej, ek, el, em, en, eo, ep
                
                print "-----------------------------"
                print "----------FE BAHÁ´Í----------"
                print "-----------------------------"
                printf "%g metical |%g nakhud |\n", cf, cg
                
                print "------------------------------"
                print "------------BIBLIA------------"
                print "------------------------------"
                printf "%g talento |%g mina |%g siclo |%g pim |%g beca |%g gera |\n", ch, ci, cj, ck, cl, cm

                print "¡CATEC le agradece su consulta!"
            }'
            ;;
        5)
            read -p "Ingrese un valor en ºC: " n1
            awk -v a="$n1" 'BEGIN {
                b = a * 1.8 + 32
                c = 273.15 + a
                d = a * 0.8
                e = c / 1000000000000000000000000000000000000 * 7058
                f = 491.7 + a * 1.8
                g = a * 0.33
                h = 7.5 + a * 0.525
                i = 150 - a * 1.5 
                
                print "-----------------------------"
                print "------------ACTUAL------------"
                print "-----------------------------"
                printf "%gºC |%gºF |%gK |%gºRe |%gΘ |\n", a, b, c, d, e
                
                print "------------------------------"
                print "-----------HISTORIA-----------"
                print "------------------------------"
                printf "%gºR |%gºN |%gRø |%gºD |\n", f, g, h, i
                
                print "¡CATEC le agradece su consulta!"
            }'
            ;;
        6)
            read -p "Ingrese un valor en km/h: " n1
            awk -v n1="$n1" 'BEGIN {
                e = n1
                
                # Previne divisão por zero se o usuário digitar 0
                if (e == 0) { e_div = 1 } else { e_div = e }

                a = n1 / 10000000 * 2778
                b = n1 / 10000 * 2778
                c = n1 / 100000 * 1667
                d = n1 / 100 * 1667
                f = n1 * 1000
                g = n1 * 8766
                h = n1 * 8765813
                i = n1 / 10000000 * 1726
                j = n1 / 10000 * 9113
                k = n1 / 100 * 1094
                l = n1 / 100000 * 1036
                m = n1 / 100 * 5468
                n = n1 / 10 * 6562
                o = n1 / 10000 * 6214
                p = n1 * 3281
                q = n1 * 39370
                r = n1 * 5447
                s = n1 * 28759228
                t = n1 * 345110740
                
                if (e == 0) {
                    u = 0; v = 0; w = 0; x = 0; y = 0; z = 0; aa = 0
                } else {
                    u = n1 * 60 / e / e
                    v = n1 * 3600 / e / e
                    w = n1 * 360 / e / e
                    x = n1 / 100 * 9656 / e / e
                    y = n1 * 5794 / e / e
                    z = n1 / 10 * 3292 / e / e
                    aa = n1 * 1800 / e / e
                }
                
                ab = n1 / 100 * 54
                ac = n1 / 100 * 54
                ad = n1 / 1000000 * 817
                ae = n1 / 1000000000000 * 926
                
                print "------------------------------"
                print "-------TAMAÑOS MÉTRICOS-------"
                print "------------------------------"
                printf "%g km/s |%g m/s |%g kilómetro por minuto |%g metro por minuto |%g km/h |%g m/h |%g kilómetro por año |%g metro por año |\n", a, b, c, d, e, f, g, h
                
                print "------------------------------"
                print "-------EEUU Y INGLATERRA-------"
                print "------------------------------"
                printf "%g milla por segundo |%g pie por segundo |%g pulgada por segundo |%g milla por minuto |%g pie por minuto |%g pulgada por minuto |%g mph |%g pie por hora |%g pulgada por hora |%g milla por año |%g pie por año |%g pulgada por año |\n", i, j, k, l, m, n, o, p, q, r, s, t
                
                print "-----------------------------"
                print "------------RITMO------------"
                print "-----------------------------"
                printf "%g minutos por kilómetro |%g segundos por kilómetro |%g segundos por 100 metros |%g minutos por milla |%g segundos por milla |%g segundos por 100 yardas |%g segundos por 500 metros |\n", u, v, w, x, y, z, aa
                
                print "-----------------------------"
                print "------UNIDADES NÁUTICAS------"
                print "-----------------------------"
                printf "%g nodo |%g millas marítimas por hora |\n", ab, ac
                
                print "------------------------------"
                print "------------FÍSICA------------"
                print "------------------------------"
                printf "%g velocidad del sonido en el aire |%g velocidad de la luz en el vacío |\n", ad, ae

                print "¡CATEC le agradece su consulta!"
            }'
            ;;
        *)
            echo "¡Tuvimos un problema con los tipos de datos que ingresaste!"
            ;;
    esac

    echo "¿Deseas realizar más una pesquisa?"
    read -p "Ingrese [Si] para realizar, caso contrário a nueva pesquisa no será realizada
> " repetir
done

echo "¡CATEC le agradece su pesquisa!"