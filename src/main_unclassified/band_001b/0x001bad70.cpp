/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2916146FC38B8C5AB4F786EC7E4EACA73103B9FF79B8E7C6B3ED7D68A822EE22
 * Entry: 0x001bad70, Ghidra index: 5727, label: FUN_001bad70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001bad70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH word; native FS:0 adapter TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003093d0); /* original x86 push imm32 at 0x001bad75 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  cVar1 = FUN_001b2970();
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar2 = FUN_001cf580(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
