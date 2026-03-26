int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2,
                int by2) {
    int Al, Ab, Bl, Bb;
    Al = ay2 - ay1;
    Ab = ax2 - ax1;
    if (Al < 0) {
        Al = 0 - Al;
    }
    if (Ab < 0) {
        Ab = 0 - Ab;
    }
    Bl = by2 - by1;
    Bb = bx2 - bx1;
    if (Bl < 0) {
        Bl = 0 - Bl;
    }
    if (Bb < 0) {
        Bb = 0 - Bb;
    }
    int Aarea, Barea;
    Aarea = Al * Ab;
    Barea = Bl * Bb;
    int OverlapStart, OverlapEnd, Overl;
    if(ax1>=bx1){
        OverlapStart = ax1;
    }
    else if(bx1>ax1){
        OverlapStart = bx1;
    }
    if(ax2<=bx2){
        OverlapEnd = ax2;
    }
    else if(bx2<ax2){
        OverlapEnd = bx2;
    }
    Overl = OverlapEnd - OverlapStart;
    if(Overl<0){
        Overl = 0;
    }
    int bOverlapStart, bOverlapEnd, Overb;
    if(ay1>=by1){
        bOverlapStart = ay1;
    }
    else if(by1>ay1){
        bOverlapStart = by1;
    }
    if(ay2<=by2){
        bOverlapEnd = ay2;
    }
    else if(by2<ay2){
        bOverlapEnd = by2;
    }
    Overb = bOverlapEnd - bOverlapStart;
    if(Overb<0){
        Overb = 0;
    }
    int OArea = 0;
    if(Overl>0&&Overb>0){
        OArea = Overl*Overb;
    }
    return Aarea+Barea-OArea;
    

}