/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDB29525836B6DDD3286F01D2E1E7B32E0EF77763780A04519373D3470F85B75
 * Entry: 0x00105b60, Ghidra index: 3348, label: FUN_00105b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_00105b60(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(param_1);
  if (uVar2 != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x24);
    if (iVar1 == 0x1463ddf4) {
      uVar2 = FUN_0010c7d0();
      return uVar2 & 0xffffff00;
    }
    if (iVar1 == 0xa3423cf) {
      uVar2 = FUN_0010c7d0();
      return uVar2 & 0xffffff00;
    }
    if (iVar1 == 0xd5bfd5d) {
      uVar2 = FUN_0010c7d0();
      return uVar2 & 0xffffff00;
    }
    if (iVar1 == -0x5a04ce7) {
      uVar2 = FUN_0010c7d0();
      return uVar2 & 0xffffff00;
    }
    if (iVar1 == -0x11df2b66) {
      uVar2 = FUN_00109f10(*(undefined4 *)(uVar2 + 0x2c));
      return uVar2 & 0xffffff00;
    }
    if (iVar1 == -0x12ea5ffd) {
      uVar2 = FUN_0010c890();
    }
  }
  return uVar2 & 0xffffff00;
}
