/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9C3C3A6AD4E7FA46BAFF1299416416744DDC66EE0EC9DF359FDEFEAC49114F0
 * Entry: 0x00316cb2, Ghidra index: 12160, label: CMcpxStream_Stop_Ex
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxStream_Stop_Ex(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if ((param_1 != 0 || param_2 != 0) &&
     (iVar1 = (**(code **)(*in_ECX + 0x18))(4,param_1,param_2,param_3), iVar1 != 0)) {
    return 0;
  }
  uVar2 = CMcpxStream_Stop(param_3);
  return uVar2;
}
