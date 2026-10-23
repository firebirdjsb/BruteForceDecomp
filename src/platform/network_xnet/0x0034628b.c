/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2AFCC1992A5FECC1E33D663F887FC0B5B63D1F474DE3844DE6348D66BE76DEBC
 * Entry: 0x0034628b, Ghidra index: 12830, label: connect
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xonline_context_bytes_x86.h"
int __thiscall XONLINES__connect(XONLINES *this,int __fd,sockaddr *__addr,socklen_t __len)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((this == (XONLINES *)0x0) || (*(short *)(this + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
    return -1;
  }
  iVar2 = FUN_003454a2(__fd);
  if (iVar2 == 0) {
    return -1;
  }
  if (((*(uint *)(iVar2 + 0xc) & 0x40) != 0) && ((*(uint *)(iVar2 + 0xc) & 2) != 0)) {
    iVar3 = 0x2748;
    goto LAB_00346302;
  }
  uVar1 = *(undefined4 *)(__addr->sa_data + 2);
  __fd = (int)*(ushort *)__addr->sa_data;
  iVar3 = FUN_00348618(uVar1);
  if (iVar3 == 0) {
    if ((*(uint *)(iVar2 + 0xc) & 2) == 0) {
      iVar3 = FUN_003556b8(iVar2,uVar1,__fd);
LAB_00346376:
      if (-1 < iVar3) {
        iVar3 = 0;
        goto LAB_00346302;
      }
    }
    else if ((*(uint *)(iVar2 + 0xc) & 0x40000) == 0) {
      iVar3 = FUN_00354d01(iVar2,uVar1,__fd,0);
      if (-1 < iVar3) {
        iVar3 = FUN_00345e05(iVar2,0x4000,0);
        FUN_00345541(0xffffffff,0x100);
        goto LAB_00346376;
      }
    }
    else {
      iVar3 = FUN_00354d01(iVar2,uVar1,__fd,0);
      if (-1 < iVar3) {
        iVar3 = -0x7ff8d8cd;
      }
    }
  }
  else {
    iVar3 = -0x7ff8d8af;
  }
  iVar3 = RtlNtStatusToDosError(iVar3);
LAB_00346302:
  *(undefined4 *)(iVar2 + 8) = 0x2b434f53;
  if (iVar3 != 0) {
    XAPILIB__SetLastError(iVar3);
    return -1;
  }
  return 0;
}
