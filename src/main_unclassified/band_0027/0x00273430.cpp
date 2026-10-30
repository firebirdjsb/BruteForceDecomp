/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A97F71F90D080D3F387C088E5E4DCA30DAC8717049BBAEC38F58A38EE8997FB
 * Entry: 0x00273430, Ghidra index: 8856, label: FUN_00273430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392490;
void FUN_00273430(void)

{
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  
  FUN_002710e0(unaff_ESI,unaff_EBX);
  *unaff_ESI = &PTR_FUN_00392490;
  unaff_ESI[0x3e] = 0;
  unaff_ESI[0x3f] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x3a] = 0;
  unaff_ESI[0x3b] = 0;
  unaff_ESI[0x3d] = 6;
  unaff_ESI[0x3c] = 6;
  FUN_00273510(unaff_EBX);
  FUN_00273790();
  FUN_00271330();
  FUN_00271430(unaff_ESI,unaff_ESI + 0x26,unaff_ESI + 0x15);
  return;
}
