/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D864C33CF3C54F3159B5EA6F50B8DBBA0767EBC786933AAC79AFF4ADB9F7A44
 * Entry: 0x002ff500, Ghidra index: 11065, label: FUN_002ff500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ff500(undefined4 param_1,char *param_2)

{
  undefined1 local_800 [2048];
  
  FID_conflict__vprintf(param_2,&stack0x0000000c);
  FUN_002eba94(local_800,param_2,&stack0x0000000c);
  XAPILIB__OutputDebugStringA(local_800);
  return;
}
