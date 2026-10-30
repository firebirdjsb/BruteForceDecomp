/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE2D4AEF18449FD938BD9F0084D75844E7A0C52075252B671BE9ACE453F917ED
 * Entry: 0x001edd00, Ghidra index: 6946, label: FUN_001edd00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
void FUN_001edd00(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar3 = (int *)((in_ECX + 4) * 0x2c + in_EAX);
  iVar1 = DAT_004698d0 + 3;
  if (iVar1 != *piVar3) {
    puVar4 = (undefined4 *)(in_ECX * 0x2c + 0xb4 + in_EAX);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    *piVar3 = iVar1;
    FUN_001ee140(iVar1);
  }
  return;
}
