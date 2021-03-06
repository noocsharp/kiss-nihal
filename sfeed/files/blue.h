/* custom blue higlight theme */

#define THEME_ITEM_NORMAL()           do {                            } while(0)
#define THEME_ITEM_FOCUS()            do {                            } while(0)
#define THEME_ITEM_BOLD()             do { attrmode(ATTR_BOLD_ON); ttywrite("\x1b[34m"); } while(0)
#define THEME_ITEM_SELECTED()         do { if (p->focused) attrmode(ATTR_REVERSE_ON); } while(0)
#define THEME_SCROLLBAR_FOCUS()       do {                            } while(0)
#define THEME_SCROLLBAR_NORMAL()      do { attrmode(ATTR_FAINT_ON);   } while(0)
#define THEME_SCROLLBAR_TICK_FOCUS()  do { attrmode(ATTR_REVERSE_ON); } while(0)
#define THEME_SCROLLBAR_TICK_NORMAL() do { attrmode(ATTR_REVERSE_ON); } while(0)
#define THEME_LINEBAR()               do { attrmode(ATTR_FAINT_ON);   } while(0)
#define THEME_STATUSBAR()             do { attrmode(ATTR_REVERSE_ON); } while(0)
#define THEME_INPUT_LABEL()           do { attrmode(ATTR_REVERSE_ON); } while(0)
#define THEME_INPUT_NORMAL()          do {                            } while(0)
