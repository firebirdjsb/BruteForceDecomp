/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 715CB62AEF3882C792AF7763B80E70B47DEBB8CF2E767B4708B95C1B906B01EF
 * Entry: 0x00346f3f, Ghidra index: 12842, label: send
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ssize_t __thiscall XONLINES__send(XONLINES *this,int __fd,void *__buf,size_t __n,int __flags)

{
  int iVar1;
  int iVar2;
  undefined1 local_24 [4];
  undefined4 local_20;
  size_t *local_1c;
  undefined4 local_18;
  size_t local_14;
  undefined4 local_10;
  size_t local_c;
  void *local_8;
  
  if ((this == (XONLINES *)0x0) || (*(short *)(this + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar1 = FUN_003454a2(__fd);
    if (iVar1 != 0) {
      local_20 = 0;
      local_10 = 0;
      local_c = __n;
      local_8 = __buf;
      local_14 = __n;
      local_1c = &local_c;
      local_18 = 1;
      iVar2 = FUN_00346b21(iVar1,local_24);
      if (iVar2 < 0) {
        iVar2 = RtlNtStatusToDosError(iVar2);
      }
      else {
        iVar2 = 0;
      }
      *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
      if (iVar2 == 0) {
        return local_14;
      }
      XAPILIB__SetLastError(iVar2);
    }
  }
  return -1;
}
