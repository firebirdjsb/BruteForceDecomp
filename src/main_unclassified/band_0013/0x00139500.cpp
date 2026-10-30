/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD822CBEA10D11D6BB60D6823A3E96B32BEC6231A9B571ACB015D6A7BBC30A46
 * Entry: 0x00139500, Ghidra index: 3955, label: FUN_00139500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_00139500(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    do {
      *param_1 = *unaff_EDI;
      puVar2[-3] = unaff_EDI[1];
      *(byte *)(puVar2 + -2) = (byte)puVar2[-2] ^ ((byte)puVar2[-2] ^ *(byte *)(unaff_EDI + 2)) & 1;
      uVar1 = unaff_EDI[4];
      if (*puVar2 != uVar1) {
        if (*puVar2 != 0) {
          FUN_0008f6e0();
        }
        *puVar2 = uVar1;
        if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
          uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar2[-1] = *(uint *)(&DAT_00414da0 + uVar1 * 4);
          *(uint **)(&DAT_00414da0 + uVar1 * 4) = puVar2 + -1;
        }
      }
      param_1 = param_1 + 5;
      puVar2 = puVar2 + 5;
    } while (param_1 != param_2);
  }
  return;
}
