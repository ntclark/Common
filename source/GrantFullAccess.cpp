
#include <aclapi.h>
#include <sddl.h>

   extern "C" int GrantFullAccess(char *pszDirectory) {

   ACL *pNewDACL = NULL;
   ACL *pOldDACL = NULL;
   PSECURITY_DESCRIPTOR pSecurityDescriptor = NULL;
   EXPLICIT_ACCESSA explicitAccess = {0};
   PSID pSID = NULL;

   DWORD rc = GetNamedSecurityInfoA(pszDirectory,SE_FILE_OBJECT,DACL_SECURITY_INFORMATION,NULL,NULL,&pOldDACL,NULL,&pSecurityDescriptor);

   BOOL x = ConvertStringSidToSidA("S-1-5-32-545",&pSID);

   explicitAccess.grfAccessPermissions = FILE_ALL_ACCESS | GENERIC_WRITE | GENERIC_READ;
   explicitAccess.grfAccessMode = GRANT_ACCESS;
   explicitAccess.grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;

   explicitAccess.Trustee.ptstrName = (LPSTR)pSID;
   explicitAccess.Trustee.pMultipleTrustee = NULL;
   explicitAccess.Trustee.MultipleTrusteeOperation = NO_MULTIPLE_TRUSTEE;
   explicitAccess.Trustee.TrusteeForm = TRUSTEE_IS_SID;
   explicitAccess.Trustee.TrusteeType = TRUSTEE_IS_GROUP;

   rc = SetEntriesInAclA(1,&explicitAccess,pOldDACL,&pNewDACL);

   rc = SetNamedSecurityInfoA(pszDirectory,SE_FILE_OBJECT,DACL_SECURITY_INFORMATION,NULL,NULL,pNewDACL,NULL);

   LocalFree(pSID);

   return 0;
   }
