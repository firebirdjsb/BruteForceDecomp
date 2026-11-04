/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42319864D229483B487D24C9E79F7696B05EDF717DA03BD8D54EB9548A0B9E76
 * Entry: 0x00359280, Ghidra index: 13166, label: FUN_00359280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; original direct calls checked. Xbox ABI_UNVERIFIED. */
extern uint FUN_00358400(uint *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,uint param_11);
void FUN_00359280(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00358400(param_1,param_2,param_3,param_4,param_5,param_6,0,0,*param_1,param_1[1],param_7);
  return;
}
