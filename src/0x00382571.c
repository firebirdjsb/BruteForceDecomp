/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62CAC4FF0D6785E2F4636ADF9321738E194AA0ADCA9FA62F6033B5F172247179
 * Entry: 0x00382571, Ghidra index: 13597, label: FUN_00382571
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00382571(void)

{
  char *pcVar1;
  int iVar2;
  char *in_ECX;
  uint local_8;
  
  pcVar1 = in_ECX;
  if (*in_ECX == '\x05') {
    pcVar1 = (char *)FUN_00380f6c();
  }
  iVar2 = FUN_00380f6c();
  if (iVar2 != 0) {
    local_8._1_3_ = (undefined3)((uint)in_ECX >> 8);
    local_8 = CONCAT31(local_8._1_3_,pcVar1[4]) & 0xffffff7f;
    FUN_003824fa(local_8);
    FUN_00382132(local_8,5);
  }
  return;
}
