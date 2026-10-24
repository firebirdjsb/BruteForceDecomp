/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F27D90811575D102A3473C35DB2DBDD3E80C00E8FC4C25C735B7115B3D33E263
 * Entry: 0x002f3298, Ghidra index: 10827, label: XCalculateSignatureBeginEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
undefined4 * XAPILIB__XCalculateSignatureBeginEx(undefined4 param_1,dword param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  dword *pdVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)LocalAlloc(0,0x7c);
  if (puVar1 == (undefined4 *)0x0) {
    uVar5 = 8;
LAB_002f32e2:
    SetLastError(uVar5);
    puVar1 = (undefined4 *)0xffffffff;
  }
  else {
    *puVar1 = param_1;
    pcVar3 = (code *)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x003864e8);
    if (XBE_CERTIFICATE_HEADER_00010180.TitleID != param_2) {
      uVar2 = 0;
      pdVar4 = XBE_CERTIFICATE_HEADER_00010180.AlternateTitleIDs;
      do {
        if (*pdVar4 == 0) goto LAB_002f32e0;
        if (param_2 == *pdVar4) break;
        uVar2 = uVar2 + 1;
        pdVar4 = pdVar4 + 1;
      } while (uVar2 < 0x10);
      if (0x3f < uVar2) {
LAB_002f32e0:
        uVar5 = 5;
        goto LAB_002f32e2;
      }
      pcVar3 = (code *)(uintptr_t)(*(uint32_t *)(uintptr_t)UINT32_C(0x003864ec) + uVar2 * 0x10);
    }
    puVar1[1] = pcVar3;
    FUN_002f314a(puVar1[1],0x10,puVar1 + 2);
  }
  return puVar1;
}
