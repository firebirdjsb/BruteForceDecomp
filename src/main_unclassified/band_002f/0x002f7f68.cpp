/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D52DA1DCAD98A359CE51A50CC841D35744CAA54764703A08A7651A9BBB239C9
 * Entry: 0x002f7f68, Ghidra index: 10941, label: FUN_002f7f68
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
int FUN_002f7f68(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  undefined1 local_8c [116];
  byte local_18 [20];
  
  iVar2 = param_1;
  if (*(dword *)(param_1 + 0x4ab) == XBE_CERTIFICATE_HEADER_00010180.TimeDateStamp) {
    param_1 = 0x4cb;
    XcSHAInit(local_8c);
    XcSHAUpdate(local_8c,&param_1,4);
    XcSHAUpdate(local_8c,iVar2 + 4,param_1);
    XcSHAFinal(local_8c,local_18);
    iVar4 = 0x14;
    bVar7 = false;
    iVar3 = 0;
    bVar8 = true;
    pbVar5 = local_18;
    pbVar6 = (byte *)(iVar2 + 0x4cf);
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar3 == 0) {
      cVar1 = XcVerifyPKCS1Signature(iVar2 + 0x4e3,*(uint32_t *)(uintptr_t)UINT32_C(0x00386480),local_18);
      iVar2 = (-(uint)(cVar1 != '\0') & 0x3ffffe70) + 0xc0000190;
    }
    else {
      iVar2 = -0x3ffffe70;
    }
  }
  else {
    iVar2 = -0x3ffffeaa;
  }
  return iVar2;
}
