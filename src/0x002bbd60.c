/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C1FC04DBF95D45DD2258C95BF3D26647C5F6C07C177123F73E26A71CA7DFE25
 * Entry: 0x002bbd60, Ghidra index: 9913, label: FUN_002bbd60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
void FUN_002bbd60(short param_1)

{
  undefined4 *in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  
  *(undefined2 *)(unaff_ESI + 4) = 0;
  if (in_EAX != (undefined4 *)0x0) {
    *(short *)((int)unaff_ESI + 0x12) = param_1 + -0x20;
    *in_EAX = unaff_ESI[1];
    unaff_ESI[1] = in_EAX;
    uVar1 = (int)in_EAX + 0x23U & 0xffffffe0;
    unaff_ESI[2] = uVar1;
    unaff_ESI[3] = *(ushort *)((int)unaff_ESI + 0x12) + uVar1;
    *unaff_ESI = unaff_ESI[1];
    return;
  }
  *(undefined2 *)((int)unaff_ESI + 0x12) = 0;
  puVar2 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(0x8000);
  *puVar2 = unaff_ESI[1];
  unaff_ESI[1] = puVar2;
  uVar1 = (int)puVar2 + 0x23U & 0xffffffe0;
  unaff_ESI[2] = uVar1;
  unaff_ESI[3] = uVar1 + 0x7fd8;
  *unaff_ESI = unaff_ESI[1];
  return;
}
