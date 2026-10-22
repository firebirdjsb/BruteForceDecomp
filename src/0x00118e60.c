/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8931E38515F6908DACBEFBE937EC784C42FDEA0BC75BBC79DA27D2739774191F
 * Entry: 0x00118e60, Ghidra index: 3602, label: FUN_00118e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00118e60(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  iVar1 = FUN_0014d330();
  if (iVar1 == 0) {
    puVar3 = &DAT_0046d064;
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 8);
  }
  *(undefined4 *)(unaff_ESI + 0x844) = *puVar3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x1f8);
  }
  *(undefined4 *)(unaff_ESI + 0x84c) = uVar2;
  iVar1 = FUN_0014d3b0();
  if (iVar1 == 0) {
    puVar3 = &DAT_0046d064;
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 8);
  }
  *(undefined4 *)(unaff_ESI + 0x848) = *puVar3;
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_ESI + 0x850) = *(undefined4 *)(iVar1 + 0x1f8);
    *(undefined1 *)(unaff_ESI + 0x840) = 1;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x850) = 0;
  *(undefined1 *)(unaff_ESI + 0x840) = 1;
  return;
}
