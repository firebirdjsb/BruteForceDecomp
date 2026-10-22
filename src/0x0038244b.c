/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7468E37640C0845DA248C3085C62B28F22896E8C6FDF1FA4B168354985945EF9
 * Entry: 0x0038244b, Ghidra index: 13595, label: FUN_0038244b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412720;
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412754;
extern uint32_t DAT_00412770;
extern uint32_t DAT_00412798;
extern uint32_t *DAT_0041279c;
extern uint32_t *DAT_004127a0;
void FUN_0038244b(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint local_c;
  int local_8;
  
  if (DAT_00412721 != '\0') {
    FUN_003823f9(param_2);
  }
  DAT_00412721 = 0;
  if (DAT_0041279c == (undefined1 *)0x0) {
    DAT_004127a0 = (undefined1 *)0x0;
    DAT_00412720 = 0;
  }
  else {
    DAT_004127a0 = DAT_0041279c;
    DAT_00412722 = DAT_0041279c[5];
    DAT_00412723 = 0x80;
    puVar1 = *(undefined1 **)(DAT_0041279c + 0x10);
    *DAT_0041279c = 0xfd;
    DAT_0041279c = puVar1;
    *(undefined4 *)(DAT_004127a0 + 0x10) = 0;
    DAT_004127a0[5] = 0;
    KeQuerySystemTime(&local_c);
    if ((local_8 < *(int *)(DAT_004127a0 + 0x1c)) ||
       ((local_8 <= *(int *)(DAT_004127a0 + 0x1c) && (local_c <= *(uint *)(DAT_004127a0 + 0x18)))))
    {
      DAT_00412798 = 0;
      KeSetTimer(&DAT_00412770,*(undefined4 *)(DAT_004127a0 + 0x18),
                 *(undefined4 *)(DAT_004127a0 + 0x1c),&DAT_00412754);
    }
    else {
      FUN_0038231c();
    }
  }
  return;
}
