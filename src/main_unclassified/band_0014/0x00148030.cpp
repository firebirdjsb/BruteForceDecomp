/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6B72E96FD90A19A9D79056CDAFAD72590C16AD79D78141F187D336C074D8881
 * Entry: 0x00148030, Ghidra index: 4249, label: FUN_00148030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00148030(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0xc) & 1) != 0) {
      FUN_000cdbc0(*(undefined4 *)(iVar1 + 8));
      *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) & 0xfe;
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) & 0xfe;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (**(code **)(*DAT_00469940 + 0x20))(*(int *)(iVar1 + 0x18),0);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) & 0xf1;
  }
  *(uint *)(*(int *)(param_1 + 0x6c) + 0x44) = *(uint *)(*(int *)(param_1 + 0x6c) + 0x44) | 0x80;
  return;
}
