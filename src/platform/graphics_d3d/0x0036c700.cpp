/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC04F80709305C363D8573ABF7ED0D75DB798BFB139ABC8E23234F38282FD9B5
 * Entry: 0x0036c700, Ghidra index: 13279, label: D3DResource_AddRef
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint D3D8LTCG__D3DResource_AddRef(uint *param_1)

{
  uint uVar1;
  
  if ((((*param_1 & 0xffff) == 0) && ((*param_1 & 0x70000) == 0x50000)) && (param_1[5] != 0)) {
    D3DResource_AddRef(param_1[5]);
  }
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  return uVar1 + 1 & 0xffff;
}
