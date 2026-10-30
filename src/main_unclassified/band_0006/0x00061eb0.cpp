/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 030BAC440A9A3114AE55563907B16F541DF791D33E3C2248D59290C34B190294
 * Entry: 0x00061eb0, Ghidra index: 1040, label: FUN_00061eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061eb0(void)

{
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00061f50();
  local_28 = -local_28;
  local_24 = *unaff_ESI;
  local_2c = -local_2c;
  local_30 = -local_30;
  local_20 = unaff_ESI[3];
  local_1c = unaff_ESI[6];
  local_18 = unaff_ESI[1];
  local_14 = unaff_ESI[4];
  local_10 = unaff_ESI[7];
  local_c = unaff_ESI[2];
  local_8 = unaff_ESI[5];
  local_4 = unaff_ESI[8];
  FUN_0003d6c0(unaff_EDI,&local_24,&local_30);
  return;
}
