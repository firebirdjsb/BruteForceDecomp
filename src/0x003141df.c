/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA4131E7F90C51CEBB88A1569752AB9B327FE998D1ECF783E1DECCE4060E6E52
 * Entry: 0x003141df, Ghidra index: 12050, label: IDirectSound_SetPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_SetPosition
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CDirectSound_SetPosition(-(uint)(param_1 != 0) & param_1 - 8U,param_2,param_3,param_4,param_5);
  return;
}
