/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C0E27408F0C489192E5975FB24ECB7104B691842ABE3FE5626A04D2CF8F02EE
 * Entry: 0x0036ebf0, Ghidra index: 13313, label: FUN_0036ebf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0036ebf0(undefined4 param_1,undefined4 param_2)

{
  uint in_EAX;
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)XAPILIB__LocalAlloc(0x40,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 0x1050001;
  puVar1[1] = in_EAX & 0xfffffff;
  puVar1[3] = param_1;
  puVar1[4] = param_2;
  puVar1[5] = unaff_EDI;
  puVar1[2] = 0;
  if ((((*unaff_EDI & 0xffff) == 0) && ((*unaff_EDI & 0x70000) == 0x50000)) && (unaff_EDI[5] != 0))
  {
    D3D8LTCG__D3DResource_AddRef(unaff_EDI[5]);
    puVar1 = extraout_ECX;
  }
  *unaff_EDI = *unaff_EDI + 1;
  return puVar1;
}
