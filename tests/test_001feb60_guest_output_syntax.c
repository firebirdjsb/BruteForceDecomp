#include "bf_x86_parser_item_001feb60.h"
int bf_parser_type_check(uint32_t esp, uint32_t selection, uint32_t owner,
                         const bf_parser_001feb60_io *io)
{
    bf_parser_001feb60_result r = bf_parser_001feb60_next(esp,selection,owner,io);
    return (int)r.status;
}
