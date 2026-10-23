/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAC0AD00AAD9946820F3ADE2227CE38FB0594C6F35FBC3ECC648CCC8D7E93B07
 * Entry: 0x0012b950, Ghidra index: 3792, label: FUN_0012b950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699b0;
extern uint32_t PTR_LAB_0039dbbc;
extern uint32_t _DAT_0046d2f0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012b950(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined **local_124 [65];
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(in_EAX + 0x6c);
  local_20 = 0;
  local_1c = 1;
  local_10 = 0;
  local_124[0] = &PTR_LAB_0039dbbc;
  local_18 = 0xea;
  local_14 = 0x15a0000;
  iVar1 = FUN_00153780(*(undefined4 *)(in_EAX + 8),in_EAX,local_124,
                       *(float *)(*(int *)(in_EAX + 0xc) + 0x1d4) * 0.8,0x3fb33333);
  if (0 < iVar1) {
    iVar2 = *(int *)(DAT_004699b0 + 4);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        if ((_DAT_0046d2f0 < *(float *)(iVar2 + 0x28)) &&
           ((iVar3 == 0 || (*(float *)(iVar3 + 0x40) < *(float *)(iVar2 + 0x40))))) {
          iVar3 = iVar2;
        }
        iVar2 = iVar2 + 0x54;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if (iVar3 != 0) {
        if (*(uint **)(iVar3 + 0x50) == (uint *)0x0) {
          return;
        }
        if ((**(uint **)(iVar3 + 0x50) & 0x20000000) != 0) {
          return;
        }
        if ((*(byte *)(in_EAX + 0x261) & 0x40) == 0) {
          return;
        }
        FUN_0012bf40();
        return;
      }
    }
  }
  *(undefined4 *)(in_EAX + 0x6e8) = *(undefined4 *)(unaff_EDI + 4);
  *(undefined4 *)(in_EAX + 0x1f0) = 3;
  *(byte *)(in_EAX + 0x262) = *(byte *)(in_EAX + 0x262) & 0xfe;
  *(byte *)(in_EAX + 0x261) = *(byte *)(in_EAX + 0x261) & 0x3f;
  *(undefined4 *)(in_EAX + 0x71c) = 0;
  if (*(int *)(in_EAX + 0x24c) != 0) {
    *(uint *)(in_EAX + 0x250) = *(uint *)(in_EAX + 0x250) | 0x40;
  }
  FUN_0012bfa0();
  FUN_0012eab0(1);
  return;
}
