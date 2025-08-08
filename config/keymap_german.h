/**
 * This file includes custom keycodes for the German (ISO) input language setting.
 */

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define DE_CIRC GRAVE  // ^ (dead)
#define DE_SS MINUS    // ß
#define DE_ACUTE EQUAL // ´ (dead)
#define DE_UE LBKT     // Ü
#define DE_PLUS RBKT   // +
#define DE_HASH NUHS   // #
#define DE_OE SCLN     // Ö
#define DE_AE QUOT     // Ä
#define DE_LESS NUBS   // <
#define DE_MINS FSLH   // -
#define DE_COMM COMMA  // ,
#define DE_DOT DOT     // .

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define DE_DEG LS(GRAVE)  // ° (Shift+^)
#define DE_EXCL LS(N1)    // !
#define DE_DQUOT LS(N2)   // "
#define DE_SECT LS(N3)    // §
#define DE_DOLL LS(N4)    // $
#define DE_PERC LS(N5)    // %
#define DE_AMPR LS(N6)    // &
#define DE_SLSH LS(N7)    // /
#define DE_LPAR LS(N8)    // (
#define DE_RPAR LS(N9)    // )
#define DE_EQL LS(N0)     // =
#define DE_QUES LS(MINUS) // ?
#define DE_GRV LS(EQUAL)  // `
#define DE_ASTRK LS(RBKT) // *
#define DE_APOS LS(NUHS)  // ‘ (German “Einfaches Anführungszeichen”)
#define DE_GREAT LS(NUBS) // >
#define DE_SCLN LS(COMMA) // ;
#define DE_COLN LS(DOT)   // :
#define DE_UNDSC LS(FSLH) // _

/* AltGr (RALT) symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │ µ │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define DE_SUP2 RA(N2)    // ²
#define DE_SUP3 RA(N3)    // ³
#define DE_LCBRC RA(N7)   // {
#define DE_LBRC RA(N8)    // [
#define DE_RBRC RA(N9)    // ]
#define DE_RCBRC RA(N0)   // }
#define DE_BSLS RA(MINUS) // Backslash
#define DE_AT RA(Q)       // @
#define DE_EURO RA(E)     // €
#define DE_TILDE RA(RBKT) // ~
#define DE_PIPE RA(NUBS)  // |
#define DE_MICRO RA(M)    // µ

/*
 * Personalized or rarely used symbols could be added here
 * (e.g. dead keys, capital umlauts, etc.)
 */
