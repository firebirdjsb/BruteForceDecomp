/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 081BE3541094CFB1CCA131594583DA132B7E4348F2D8EAA643CBC2EFF5CB000A
 * Entry: 0x0014d760, Ghidra index: 4369, label: FUN_0014d760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014d760(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int unaff_ESI;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 10;
  local_4 = 0xffffffff;
  FUN_00149d30(&local_8,&local_4);
  uVar2 = local_4;
  uVar1 = local_8;
  cVar3 = FUN_0014d680(local_8,local_4);
  if (cVar3 != '\0') {
    *(undefined4 *)(unaff_ESI + 0x1c0) = uVar1;
    *(undefined4 *)(unaff_ESI + 0x1c4) = uVar2;
  }
  return;
}
