/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 245BF077C6BBDA42D3821EAB216A5077149AD2A1C15124F2676B223A189FE969
 * Entry: 0x00238910, Ghidra index: 7880, label: FUN_00238910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00238910(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_00238290();
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = param_1;
  }
  *puVar1 = 0;
  if ((undefined4 *)unaff_ESI[1] != (undefined4 *)0x0) {
    *(undefined4 *)unaff_ESI[1] = puVar1;
    puVar1[1] = unaff_ESI[1];
    unaff_ESI[1] = puVar1;
    return;
  }
  puVar1[1] = 0;
  *unaff_ESI = puVar1;
  unaff_ESI[1] = puVar1;
  return;
}
