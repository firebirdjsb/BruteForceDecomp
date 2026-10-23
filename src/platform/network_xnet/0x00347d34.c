/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C88BF6F48C2F07CE47429AB57AB353E591CD8BDEB88554CFA8CA6B670CDB7EE1
 * Entry: 0x00347d34, Ghidra index: 12884, label: FUN_00347d34
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00347d34(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 local_2c [20];
  undefined1 local_18;
  byte local_17 [4];
  byte abStack_13 [4];
  byte abStack_f [4];
  byte abStack_b [7];
  
  iVar1 = FUN_0035614e(param_1);
  if (-1 < iVar1) {
    FUN_00352ebc(0x100000);
    iVar1 = FUN_00352e26();
    if (-1 < iVar1) {
      uVar3 = (uint)*(byte *)(in_ECX + 0xd) * 0xf4;
      iVar1 = in_ECX + 0xa78;
      *(int *)(in_ECX + 0xa7c) = iVar1;
      *(int *)iVar1 = iVar1;
      puVar2 = (undefined4 *)ExAllocatePoolWithTag(uVar3,0x6f54454e);
      if (puVar2 != (undefined4 *)0x0) {
        puVar4 = puVar2;
        for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      *(undefined4 **)(in_ECX + 0xac0) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = (uint)*(byte *)(in_ECX + 0xe) * 0x130;
        puVar2 = (undefined4 *)ExAllocatePoolWithTag(uVar3,0x7054454e);
        if (puVar2 != (undefined4 *)0x0) {
          puVar4 = puVar2;
          for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
        }
        *(undefined4 **)(in_ECX + 0xac4) = puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          iVar1 = XAPILIB__LocalAlloc(0x40,0xa54);
          *(int *)(in_ECX + 0xbcc) = iVar1;
          if (iVar1 != 0) {
            local_17[0] = XBE_CERTIFICATE_HEADER_00010180.LANKey[0];
            local_17[1] = XBE_CERTIFICATE_HEADER_00010180.LANKey[1];
            local_17[2] = XBE_CERTIFICATE_HEADER_00010180.LANKey[2];
            local_17[3] = XBE_CERTIFICATE_HEADER_00010180.LANKey[3];
            abStack_13[0] = XBE_CERTIFICATE_HEADER_00010180.LANKey[4];
            abStack_13[1] = XBE_CERTIFICATE_HEADER_00010180.LANKey[5];
            abStack_13[2] = XBE_CERTIFICATE_HEADER_00010180.LANKey[6];
            abStack_13[3] = XBE_CERTIFICATE_HEADER_00010180.LANKey[7];
            abStack_f[0] = XBE_CERTIFICATE_HEADER_00010180.LANKey[8];
            abStack_f[1] = XBE_CERTIFICATE_HEADER_00010180.LANKey[9];
            abStack_f[2] = XBE_CERTIFICATE_HEADER_00010180.LANKey[10];
            abStack_f[3] = XBE_CERTIFICATE_HEADER_00010180.LANKey[0xb];
            abStack_b[0] = XBE_CERTIFICATE_HEADER_00010180.LANKey[0xc];
            abStack_b[1] = XBE_CERTIFICATE_HEADER_00010180.LANKey[0xd];
            abStack_b[2] = XBE_CERTIFICATE_HEADER_00010180.LANKey[0xe];
            abStack_b[3] = XBE_CERTIFICATE_HEADER_00010180.LANKey[0xf];
            local_18 = 0;
            XcHMAC(XboxLANKey_exref,0x10,&local_18,0x11,0,0,&local_40);
            local_18 = 1;
            XcHMAC(XboxLANKey_exref,0x10,&local_18,0x11,0,0,local_2c);
            *(undefined4 *)(in_ECX + 0xa90) = local_40;
            *(undefined4 *)(in_ECX + 0xa94) = local_3c;
            *(undefined4 *)(in_ECX + 0xa98) = uStack_38;
            *(undefined4 *)(in_ECX + 0xa9c) = uStack_34;
            puVar2 = &local_30;
            puVar4 = (undefined4 *)(in_ECX + 0xaa0);
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar4 = puVar4 + 1;
            }
            XcDESKeyParity((undefined4 *)(in_ECX + 0xaa0),0x18);
            local_18 = 2;
            XcHMAC(XboxLANKey_exref,0x10,&local_18,0x11,0,0,&local_40);
            *(undefined4 *)(in_ECX + 0xab8) = local_40;
            *(undefined4 *)(in_ECX + 0xabc) = local_3c;
            FUN_0034c7e5(in_ECX + 0xace,2);
            *(uint *)(in_ECX + 0xad4) = (uint)*(byte *)(in_ECX + 0x3e) * 5;
            KeQuerySystemTime(in_ECX + 0xad8);
            *(undefined2 *)(in_ECX + 0x8c6) = 0x20c;
            FUN_0034c7e5(in_ECX + 0x8b0,4);
            return 0;
          }
        }
      }
      iVar1 = 0x2747;
    }
  }
  return iVar1;
}
