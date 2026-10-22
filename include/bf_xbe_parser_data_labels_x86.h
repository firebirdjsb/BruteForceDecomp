/* Additional original-XBE named data locations in C11 parser drafts.
 *
 * Every symbol below preserves the original hexadecimal address found in
 * Ghidra's exported C source. The user-provided original XBE bytes are
 * NOT available to this C11 repair. Storage sizes, encoding (including
 * possible wide strings), contents and relocations remain unverified.
 * Declarations allocate NO data; do not populate guessed strings.
 *
 * Ghidra names s_<eof>_expected_00403f98 and
 * s_<expression>_expected_00403f38 are not legal C identifiers, so the
 * source-only names BF_XBE_DATA_00403F98 and BF_XBE_DATA_00403F38
 * preserve their original address without changing call expressions.
 * u__s_s_0040cd58 is already a valid symbol and is left unchanged.
 */
#ifndef BF_XBE_PARSER_DATA_LABELS_X86_H
#define BF_XBE_PARSER_DATA_LABELS_X86_H
#include <stdint.h>
extern char BF_XBE_DATA_00403F98[];
extern char BF_XBE_DATA_00403F38[];
extern uint8_t u__s_s_0040cd58[];
#endif
