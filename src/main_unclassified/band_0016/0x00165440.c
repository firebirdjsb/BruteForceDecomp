/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EF2F7B2E1D4CCFE8F43A2E0DF90A09E51B04303C025330193CE7648FFFCB899
 * Entry: 0x00165440, Ghidra index: 4696, label: FUN_00165440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00165440(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *in_EAX = *unaff_ESI;
  in_EAX[1] = unaff_ESI[1];
  in_EAX[2] = unaff_ESI[2];
  in_EAX[3] = unaff_ESI[3];
  in_EAX[4] = unaff_ESI[4];
  in_EAX[5] = unaff_ESI[5];
  FUN_00164d90(param_1);
  return;
}
