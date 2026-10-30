/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C06395ED99775D23680A8D7B3528CADFD55D74B7A39289D9965C1FEFF0463CC
 * Entry: 0x00090750, Ghidra index: 1770, label: FUN_00090750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_002386d0(void);

undefined4 FUN_00090750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_002386d0();
  D3D8LTCG__D3DDevice_DrawIndexedVertices(param_1,param_2,param_3);
  return 0;
}
