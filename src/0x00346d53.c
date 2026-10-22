/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D06D9066DEE20A4B2A5466C217B156E920B82924623A34606F8BB999FFD585E9
 * Entry: 0x00346d53, Ghidra index: 12839, label: recv
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ssize_t __thiscall XONLINES__recv(XONLINES *this,int __fd,void *__buf,size_t __n,int __flags)

{
  int iVar1;
  int iVar2;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  size_t local_c;
  undefined4 local_8;
  
  if ((this == (XONLINES *)0x0) || (*(short *)(this + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar1 = FUN_003454a2(__fd);
    if (iVar1 != 0) {
      local_8 = 0;
      local_1c = 0;
      local_10 = __buf;
      local_c = __n;
      local_18 = __flags;
      local_14 = &__fd;
      iVar2 = FUN_00346965(iVar1,local_20);
      if (iVar2 < 0) {
        iVar2 = RtlNtStatusToDosError(iVar2);
      }
      else {
        iVar2 = 0;
      }
      *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
      if (iVar2 == 0) {
        return __fd;
      }
      XAPILIB__SetLastError(iVar2);
    }
  }
  return -1;
}
