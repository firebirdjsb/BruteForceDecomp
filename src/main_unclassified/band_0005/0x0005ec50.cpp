/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2B2E56A94B8D6BB08A1D9D9801A38697368E971ABD7FBF34095BCA1A1AE570D
 * Entry: 0x0005ec50, Ghidra index: 996, label: FUN_0005ec50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_00414da0;
void FUN_0005ec50(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar1 = *(uint *)(unaff_EDI + 4);
    if (uVar1 != param_1[1]) {
      if (param_1[1] != 0) {
        FUN_0008f6e0();
      }
      param_1[1] = uVar1;
      if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
        uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
        *param_1 = *(undefined4 *)(&DAT_00414da0 + uVar1 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar1 * 4) = param_1;
      }
    }
  }
  return;
}
