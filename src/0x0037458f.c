/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9943D43FE7B18C1F1E7C8E4F581BD2334F327ED13526F8D03569F620BED94780
 * Entry: 0x0037458f, Ghidra index: 13426, label: FUN_0037458f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400100;
extern uint32_t DAT_00400140;
extern uint32_t PTR_DAT_00400720;
undefined4 FUN_0037458f(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EDI;
  
  iVar2 = *unaff_EDI;
  puVar1 = (uint *)(iVar2 + 0x184c);
  uVar3 = *puVar1;
  *puVar1 = uVar3 & 0xfffffcff;
  *puVar1 = uVar3;
  *(undefined4 *)(iVar2 + 0x200) = 0xffffffff;
  *(int *)(iVar2 + 0x140) = unaff_EDI[0x2d];
  iVar4 = *unaff_EDI;
  *(undefined4 *)(iVar4 + 0x600100) = 1;
  *(undefined4 *)(iVar4 + 0x600140) = 1;
  *(undefined4 *)(iVar2 + 0x9400) = 0;
  *(undefined4 *)(iVar2 + 0x9410) = 0;
  *(undefined4 *)((int)&PTR_DAT_00400720 + iVar2) = 0;
  FUN_00379139();
  *(undefined4 *)(&DAT_00400100 + iVar2) = 0xffffffff;
  *(undefined4 *)((int)&DAT_00400140 + iVar2) = 0xffffffff;
  FUN_0037954e();
  *(undefined4 *)(iVar2 + 0x2100) = 0xffffffff;
  *(int *)(iVar2 + 0x2140) = unaff_EDI[0x47];
  unaff_EDI[0x208] = 0;
  unaff_EDI[0x209] = 0;
  unaff_EDI[0x210] = -1;
  unaff_EDI[0x211] = -1;
  return 1;
}
