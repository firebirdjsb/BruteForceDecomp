/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E759D0A67EE850BCB6C9184DE42C5B7A6064BCE3A7FEF809D29EF277E1779D0B
 * Entry: 0x002a2820, Ghidra index: 9523, label: FUN_002a2820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a2820(void)

{
  int in_EAX;
  
  D3D8LTCG__D3DDevice_SetVertexDataColor(in_EAX,0xff0000);
  D3D8LTCG__D3DDevice_SetVertexDataColor(in_EAX + 1,0xff00);
  D3D8LTCG__D3DDevice_SetVertexDataColor(in_EAX + 2,0xff);
  return;
}
