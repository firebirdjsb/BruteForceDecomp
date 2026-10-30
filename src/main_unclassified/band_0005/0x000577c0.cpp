/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39D4131D78AD6B0A2C38CEECB2614FDE7B89C91A7D2B4096ACF5A14F9CC01EB6
 * Entry: 0x000577c0, Ghidra index: 853, label: FUN_000577c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE ret 12: third incoming stack word originally holds an Xbox pointer;
 * its low byte is cleared, passed by address, and retested. The hidden
 * pointer/register operations are not yet modelled: ABI_UNVERIFIED. */
extern void FUN_00057730(undefined4 param_1);

void FUN_000577c0(undefined4 param_1, undefined4 param_2,
                  uint32_t caller_stack_word_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char local_5;
  char local_4;
  char local_3;
  char local_2;
  char local_1;
  
  local_2 = '\0';
  local_1 = '\0';
  local_4 = '\0';
  local_3 = '\0';
  caller_stack_word_3 &= UINT32_C(0xffffff00);
  local_5 = '\0';
  FUN_00057610(param_1,&caller_stack_word_3,&local_4,&local_2);
  FUN_00057610(param_1,&local_5,&local_3,&local_1);
  if (((caller_stack_word_3 & UINT32_C(0xff)) == 0) && (local_5 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((local_4 == '\0') && (local_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((local_2 == '\0') && (local_1 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((bVar1) || (bVar2)) && (bVar3)) {
    FUN_00057730(param_1);
  }
  return;
}
