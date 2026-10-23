/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E99F0F0ECD672CC6991F9B323C5F090FBCC9FA863976931655E7E531AF7BF62D
 * Entry: 0x002f290b, Ghidra index: 10807, label: VirtualProtect
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__VirtualProtect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = NtProtectVirtualMemory(&param_1,&param_2,param_3,param_4);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
  }
  return iVar1 >= 0;
}
