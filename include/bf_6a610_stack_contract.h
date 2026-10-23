/* Narrow source-level caller stack-word contract from the original XBE.
 * The callee ALSO consumes incoming EBX and EDI; these are unrepresented in
 * ordinary ISO C11 signatures. Inclusion is NOT an Xbox/PC ABI bridge.
 * See docs/X86_6A610_STACK_WORDS_2026-10-23.md for assembly evidence.
 */
#ifndef BF_6A610_STACK_CONTRACT_H
#define BF_6A610_STACK_CONTRACT_H
#include "bf_ghidra_types.h"
undefined4 FUN_0006a610(int *caller_stack_word);
void FUN_0006a5f0(int first_stack_word);
void FUN_000907a0(int first_stack_word,int second_stack_word);
#endif
