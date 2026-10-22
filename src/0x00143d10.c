/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86A2A2382F3E5864E5CDC069FEE615B3E61C3D3DAE6BA622A663C4AC7E12C5A5
 * Entry: 0x00143d10, Ghidra index: 4147, label: FUN_00143d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_00143d10(float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int unaff_ESI;
  
  if (param_1 != 0.0) {
    *(float *)(unaff_ESI + 0x4c) = param_1 + *(float *)(unaff_ESI + 0x4c);
    if ((*(int *)(unaff_ESI + 0x48) == 0) && (*(int *)(*(int *)(unaff_ESI + 0x1c) + 0x30) != 0)) {
      FUN_0023c4e0((undefined4 *)(unaff_ESI + 0x48));
    }
    puVar1 = *(undefined4 **)(unaff_ESI + 0x48);
    if ((puVar1 != (undefined4 *)0x0) && (*(float *)*puVar1 < *(float *)(unaff_ESI + 0x4c))) {
      if (*(float *)(unaff_ESI + 0x4c) <= *(float *)(*(int *)(unaff_ESI + 0x1c) + 0x34)) {
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        fVar2 = (float)DAT_0046cfd8;
        if (DAT_0046cfd8 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        if (*(float *)(*(int *)(unaff_ESI + 0x1c) + 0x38) <=
            (fVar2 * 3.051851e-05) / (param_1 * 30.0)) {
          return;
        }
      }
      FUN_000ce0e0();
      FUN_00234470();
      FUN_00234190(*(undefined4 *)(unaff_ESI + 8),0,0);
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
    }
  }
  return;
}
