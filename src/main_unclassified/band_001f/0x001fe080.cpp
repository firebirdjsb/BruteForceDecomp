/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C70BE149F42A24A1FC69AE90BD4888905387B551925A43FFA6736A619D5EC7F4
 * Entry: 0x001fe080, Ghidra index: 7222, label: FUN_001fe080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395578;
extern uint32_t PTR_FUN_0039a828;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fe080(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  unaff_ESI[1] = 0;
  unaff_ESI[3] = PTR_FUN_0039a828;
  unaff_ESI[2] = PTR_FUN_0039c2a0;
  unaff_ESI[3] = PTR_FUN_0039a828;
  unaff_ESI[4] = 0;
  unaff_ESI[1] = 0xed0305a6;
  *unaff_ESI = PTR_FUN_00395578;
  unaff_ESI[2] = PTR_FUN_0039c24c;
  unaff_ESI[3] = PTR_FUN_0039e7e8;
  uVar2 = FUN_000e0c80(unaff_ESI + 5);
  unaff_ESI[6] = uVar2;
  unaff_ESI[7] = 0;
  uVar2 = FUN_000e0c80(unaff_ESI + 8);
  unaff_ESI[9] = uVar2;
  unaff_ESI[10] = 0;
  uVar2 = FUN_00061500(unaff_ESI + 0xb);
  unaff_ESI[0xc] = uVar2;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  *(undefined1 *)(unaff_ESI + 0xf) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x3d) = 0x41;
  local_4 = 0;
  iVar1 = unaff_ESI[9];
  iVar3 = FUN_000e1910(unaff_ESI + 8,iVar1,*(undefined4 *)(iVar1 + 4),local_8);
  FUN_000389d0();
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  return;
}
