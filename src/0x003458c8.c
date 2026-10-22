/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA91E5AB959249077B57D37BAC3CC732FE6058B5B7F0565878352DA5457F4EE3
 * Entry: 0x003458c8, Ghidra index: 12817, label: listen
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int __thiscall XONLINES__listen(XONLINES *this,int __fd,int __n)

{
  int iVar1;
  int iVar2;
  
  if ((this == (XONLINES *)0x0) || (*(short *)(this + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar1 = FUN_003454a2(__fd);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) & 0x40) == 0) {
        if ((*(uint *)(iVar1 + 0xc) & 0x20) == 0) {
          iVar2 = 0x2726;
        }
        else {
          iVar2 = FUN_00353488(iVar1,__n);
          if (iVar2 < 0) {
            iVar2 = RtlNtStatusToDosError(iVar2);
          }
          else {
            iVar2 = 0;
          }
        }
      }
      else {
        iVar2 = 0x2748;
      }
      *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
      if (iVar2 == 0) {
        return 0;
      }
      XAPILIB__SetLastError(iVar2);
    }
  }
  return -1;
}
